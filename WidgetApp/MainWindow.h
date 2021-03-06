#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class IQtAdMobBanner;
class IQtAdMobInterstitial;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    virtual void resizeEvent(QResizeEvent *event);
    
private slots:
    void OnButtonOkClicked();
    void OnBannerLoaded();
    void OnBannerLoading();
    void OnButtonInterstitialClicked();
    void OnInterstitialLoaded();
    void OnInterstitialLoading();
    void OnInterstitialClosed();

private:
    Ui::MainWindow *ui;

    IQtAdMobBanner* m_Banner;
    IQtAdMobInterstitial* m_Interstitial;
    bool m_Switch;
};

#endif // MAINWINDOW_H
