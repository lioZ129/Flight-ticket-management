#include "adminflightinfo.h"
#include "ui_adminflightinfo.h"
#include <QDebug>
#include <QMessageBox>
#include "flight.h"

AdminFlightInfo::AdminFlightInfo(Flight& flight,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdminFlightInfo())
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
    ui->PriceLine->setValue(flight.getPrice());
    ui->RemainSeatsNum->setText(QString::number(flight.getNum()-flight.getPassengers().size()));

    connect(ui->ChangeInfoBox, &QCheckBox::stateChanged, [this](int state){
        // 勾选时将时间和票价设为可更改
        if (state == Qt::Checked) {
            ui->StartTime->setReadOnly(false);
            ui->EndTime->setReadOnly(false);
            ui->PriceLine->setReadOnly(false);
        } else {
            ui->StartTime->setReadOnly(true);
            ui->EndTime->setReadOnly(true);
            ui->PriceLine->setReadOnly(true);
        }
    });

    connect(ui->SaveChangeBtn,&QPushButton::clicked,[this](){
        // 更改该航班时间票价
        QDateTime starttime = ui->StartTime->dateTime();
        QDateTime endtime = ui->EndTime->dateTime();
        QDateTime curtime = QDateTime::currentDateTime();
        double price = ui->PriceLine->value();
        QString Flightid = ui->FlightId->text();
        Flight target = Flight::Seekres(Flightid);
        if(starttime >= endtime){
            QMessageBox::warning(this, "Warning", "时间更改错误！");
        }else{
            qint64 secondsDifference = starttime.secsTo(endtime);
            double hoursDifference = secondsDifference / 3600.0;
            ui->FlyTime->setText(QString::number(hoursDifference, 'f', 2));
            target.setTime(starttime,endtime);
            target.setPrice(price);
        }
    });

    connect(ui->ShowPassInfoBtn, &QPushButton::clicked, this, &AdminFlightInfo::onShowPassInfoBtnClicked);
    QString flightid = flight.getFlightid();
    connect(ui->DeleteFlightBtn,&QPushButton::clicked,[this,flightid](){
        Flight flight = Flight::Seekres(flightid);
        Admin tempadmin = Admin();
        std::vector<QString>passengers = flight.getPassengers();
        for(auto passenger : passengers){
            User tempuser = User(passenger);
            tempuser.RefundTicket(flightid);
        }
        bool success = tempadmin.deletePlane(flightid);
        if(success){
            QMessageBox::information(nullptr, "提示", "已删除该航班");
        }
    });
}

void AdminFlightInfo::onShowPassInfoBtnClicked() {
    // 获取当前航班对象
    Flight target = Flight::Seekres(ui->FlightId->text());

    // 创建乘客信息窗口并传递航班对象
    ShowPassInfoWindow *passInfoWindow = new ShowPassInfoWindow(target, this);
    passInfoWindow->setModal(true); // 设置为模态窗口
    passInfoWindow->exec(); // 显示窗口并阻止与其他窗口的交互
}

AdminFlightInfo::~AdminFlightInfo()
{
    delete ui;
}
