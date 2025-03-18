#include "adminlogin.h"
#include "ui_adminlogin.h"
#include <QDebug>
#include <QMessageBox>
#include "loginwindow.h"

AdminLogin::AdminLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminLogin)
{
    ui->setupUi(this);
    setWindowTitle("管理员登录");
    setFixedSize(350,250);

    ar = new AdminRe(this);

    connect(ui->AdminReBtn,&QPushButton::clicked,ar,&AdminRe::createARwindow);
    connect(ui->EyeBtn,&QPushButton::clicked,[this](){
        if(ui->EyeBtn->text()=="显"){
            ui->AdminPassLine->setEchoMode(QLineEdit::Normal);
            ui->EyeBtn->setText("隐");
        }else{
            ui->AdminPassLine->setEchoMode(QLineEdit::Password);
            ui->EyeBtn->setText("显");
        }
    });
    connect(ui->AdminisLoginBtn,&QPushButton::clicked,[this](){
        QString AdminAcc = ui->AdminAccLine->text();
        QString AdminPass = ui->AdminPassLine->text();
        if(AdminAcc.isEmpty() || AdminPass.isEmpty()){
            QMessageBox::warning(this, "Warning", "账号或密码不能为空！");
            return;
        }
        bool LoginSuccess = AdminSeekInfo(AdminAcc,AdminPass);
        if(LoginSuccess){
            QMessageBox::information(nullptr, "提示", "已成功登录");
            this->accept();
            createAMwindow();
        }else{
            QMessageBox::warning(this, "Warning", "账号或密码错误！");
        }
    });
}

void AdminLogin::createAMwindow(){
    AdminMainWindow *amw = new AdminMainWindow();
    amw->show();
}

bool AdminLogin::AdminSeekInfo(QString& Account,QString& Password){
    //在管理员数据库中寻找有无对应信息，有则返回true，无则返回false
    QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setDatabaseName("mydb");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();
    QSqlQuery q;
    QString sql="select * from admin where Account='"+Account+"'&& Password='"+Password+"'";
    q.exec(sql);
    if(!q.next()){
        db.close();
        return false;
    }
    db.close();
    return true;
}

AdminLogin::~AdminLogin()
{
    delete ui;
}
