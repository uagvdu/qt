#include <QApplication>
#include <QDialog>
#include <QLabel>

int main(int argc, char* argv[]){

    QApplication a(argc,garv);
    QDialog w;
    QLabel label(&w);    
    label.setText("Hello world, empty !");
    w.show(); 
    return a.exec();
}