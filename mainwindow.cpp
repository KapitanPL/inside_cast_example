#include "mainwindow.h"

#include <QLayout>
#include <QTextEdit>

#include "libs/testlib/testlib.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
   auto textEdit = new QTextEdit("test");
   this->layout()->addWidget(textEdit);
   A * impA = createClass();
   textEdit->append(impA->getString());
   B * castB = inside_cast<B>(impA);
   C * castC = inside_cast<D>(impA);
   if(castB)
   {
      textEdit->append(castB->getName());
   }
   else{ textEdit->append("B not available"); }
   if(castC)
   {
      textEdit->append(castC->getValue());
   } else { textEdit->append("C not available"); }
}

MainWindow::~MainWindow() {}
