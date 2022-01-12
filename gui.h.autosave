#ifndef GUI_H
#define GUI_H

#include <QWidget>
#include <QTimer>
#include "ui_gui.h"

const int TIMEOUT = 1000;
namespace Ui {
class Gui;
}

class Gui : public QWidget
{
    Q_OBJECT

public:
    explicit Gui(QWidget *parent = nullptr);
    ~Gui();

private slots:
    void on_f_Slider_valueChanged(int value);
    void toggle();

private:
    Ui::Gui *ui;
    QTimer* m_timer;
    bool m_state;

};

#endif // GUI_H
