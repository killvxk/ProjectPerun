#ifndef GAMELIBRARY_H
#define GAMELIBRARY_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class gamelibrary;
}

class gamelibrary : public QDialog
{
    Q_OBJECT

public:
    explicit gamelibrary(QWidget *parent = 0);
    ~gamelibrary();

private slots:

    void on_browseDestButton_clicked();

    void on_buttonBox_clicked(QAbstractButton *button);
    
    void on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

private:
    Ui::gamelibrary *ui;
};

#endif // GAMELIBRARY_H