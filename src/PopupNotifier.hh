/* -*- mode: c++; tab-width: 4; indent-tabs-mode: t; -*- */
/**
 * @file PopupNotifier.hh GTK+ based popup notifier
 *
 * Copyright (C) 2005 Christian Hammond
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the Free
 * Software Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA  02111-1307  USA
 */
#ifndef _NOTIFYD_POPUP_NOTIFIER_HH
#define _NOTIFYD_POPUP_NOTIFIER_HH

#include "BaseNotifier.hh"

class Notification;

class PopupNotifier : public BaseNotifier
{
public:
    PopupNotifier(GMainLoop *loop, int *argc, char ***argv);

    virtual uint notify(Notification *n);
    virtual bool unnotify(Notification *n);

    virtual Notification *create_notification(DBusConnection *dbusConn);

    void handle_button_release(Notification *n);

private:
    void reflow();
};

#endif /* _NOTIFYD_POPUP_NOTIFIER_HH */
