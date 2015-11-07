#ifndef MUSICREMOTEWIDGETFORCIRCLE_H
#define MUSICREMOTEWIDGETFORCIRCLE_H

/* =================================================
 * This file is part of the Music Player project
 * Copyright (c) 2014 - 2015 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include "musicremotewidget.h"

class MUSIC_REMOTE_EXPORT MusicRemoteWidgetForCircle : public MusicRemoteWidget
{
    Q_OBJECT
public:
    explicit MusicRemoteWidgetForCircle(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);

};

#endif // MUSICREMOTEWIDGETFORCIRCLE_H