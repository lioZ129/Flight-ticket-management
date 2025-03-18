#include "userflightinfo.h"
#include "ui_userflightinfo.h"
#include <QMessageBox>

UserFlightInfo::UserFlightInfo(Flight& flight,User& user,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UserFlightInfo)
{
    ui->setupUi(this);
    ui->FlightId->setText(flight.getFlightid());
    ui->StartPoint->setText(flight.getStartpoint());
    ui->EndPoint->setText(flight.getEndpoint());
    ui->StartTime->setDateTime(flight.getStarttime());
    ui->EndTime->setDateTime(flight.getEndtime());
    qint64 secondsDifference = flight.getStarttime().secsTo(flight.getEndtime());
    double hoursDifference = secondsDifference / 3600.0;
    ui->FlyTime->setText(QString::number(hoursDifference, 'f', 2));
    ui->PriceLine->setText(QString::number(flight.getPrice()));
    ui->RemainSeatsNum->setText(QString::number(flight.getNum()-flight.getPassengers().size()));
    int reseats = flight.getNum()-flight.getPassengers().size();
    connect(ui->BuyTicketBtn, &QPushButton::clicked, [this, &user,reseats]() {
            QString flightid = ui->FlightId->text();
            QString sp = ui->StartPoint->text();
            QString ep = ui->EndPoint->text();
            QDateTime st = ui->StartTime->dateTime();
            QDateTime et = ui->EndTime->dateTime();
            int sid = 0;
            Flight f = Flight::Seekres(flightid);
            std::vector<int> seats(1000,0);
            std::vector<QString> passengers = f.getPassengers();
            for(auto passenger : passengers){
                User *curuser = new User(passenger);
                int notnull = curuser->getcurflightsid(flightid);
                seats[notnull] = 1;
                delete curuser;
            }
            for(int i = 1;i <= f.getNum();i++){
                if(seats[i] == 0){
                    sid = i;
                    break;
                }
            }
            if (!flightid.isEmpty() && !sp.isEmpty() && !ep.isEmpty()) {
                user.BuyTicket(flightid, sp, ep, st, et, sid);
                QString useraccount = user.getAccount();
                if(f.addPassenger(useraccount,sid)){
                    ui->RemainSeatsNum->setText(QString::number(reseats-1));
                    QMessageBox::information(nullptr, "提示", "购票成功");
                }else{
                    QMessageBox::information(nullptr, "提示", "无法购买两张票");
                }
            }
    });
}

UserFlightInfo::~UserFlightInfo()
{
    delete ui;
}
