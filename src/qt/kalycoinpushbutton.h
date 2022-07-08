#ifndef KLCPUSHBUTTON_H
#define KLCPUSHBUTTON_H
#include <QPushButton>
#include <QStyleOptionButton>
#include <QIcon>

class KalycoinPushButton : public QPushButton
{
public:
    explicit KalycoinPushButton(QWidget * parent = Q_NULLPTR);
    explicit KalycoinPushButton(const QString &text, QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;

private:
    void updateIcon(QStyleOptionButton &pushbutton);

private:
    bool m_iconCached;
    QIcon m_downIcon;
};

#endif // KLCPUSHBUTTON_H
