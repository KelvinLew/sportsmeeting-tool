#include <QApplication>
#include "myhelper.h"
#include "mjson.h"
#include "systemmain.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    myHelper::SetUTF8Code();
//    myHelper::SetStyle("black");//黑色风格
//    myHelper::SetStyle("blue");//蓝色风格
//    myHelper::SetStyle("gray");//灰色风格
    myHelper::SetStyle("navy");//天蓝色风格
    myHelper::SetChinese();

    SystemMain w;
    w.show();

    return a.exec();
}
