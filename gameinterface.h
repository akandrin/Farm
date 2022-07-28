#ifndef GAMEINTERFACE_H
#define GAMEINTERFACE_H

#include <QWidget>
#include "exchangebutton.h"
#include "game.h"
#include "playerwidget.h"

class GameInterface : public QWidget
{
    Q_OBJECT
    Game game;
    QVBoxLayout* common_layout;
    QGridLayout* maps_layout;
    QHBoxLayout* buttons_layout;
private:
    void onExchange1ButtonClicked();
    void onExchange2ButtonClicked();
    void onExchange3ButtonClicked();
    void onExchange4ButtonClicked();
    void onExchange5ButtonClicked();
    void onExchange6ButtonClicked();
    void onSkipButtonClicked();
    void onNextButtonClicked();
public:
    GameInterface(QWidget *parent = nullptr);
    ~GameInterface();
    void StartGame();
};
#endif // GAMEINTERFACE_H
