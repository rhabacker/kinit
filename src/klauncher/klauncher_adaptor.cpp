/*
 * Copyright 2006, 2007 Thiago Macieira <thiago@kde.org>
 * Copyright 2006-2008 David Faure <faure@kde.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) version 3, or any
 * later version accepted by the membership of KDE e.V. (or its
 * successor approved by the membership of KDE e.V.), which shall
 * act as a proxy defined in Section 6 of version 3 of the license.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "klauncher_adaptor.h"
#include <QtCore/QArgument>
#include <QtCore/QByteRef>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

#include "klauncher.h"

/*
 * Implementation of adaptor class KLauncherAdaptor
 *
 * This file was initially generated by dbusidl2cpp version 0.4,
 * but then modified by hand.
 */

KLauncherAdaptor::KLauncherAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

KLauncherAdaptor::~KLauncherAdaptor()
{
    // destructor
}

void KLauncherAdaptor::exec_blind(const QString &name, const QStringList &arg_list)
{
    // handle method call org.kde.KLauncher.exec_blind
    static_cast<KLauncher *>(parent())->exec_blind(name, arg_list);
}

void KLauncherAdaptor::exec_blind(const QString &name, const QStringList &arg_list, const QStringList &envs, const QString &startup_id)
{
    // handle method call org.kde.KLauncher.exec_blind
    static_cast<KLauncher *>(parent())->exec_blind(name, arg_list, envs, startup_id);
}

int KLauncherAdaptor::kdeinit_exec(const QString &app, const QStringList &args, const QStringList &env, const QString &startup_id, const QDBusMessage &msg, QString &, QString &, int &)
{
    // handle method call org.kde.KLauncher.kdeinit_exec
    static_cast<KLauncher *>(parent())->kdeinit_exec(app, args, QString(), env, startup_id, false, msg);
    return 0;                   // delayed reply
}

int KLauncherAdaptor::kdeinit_exec_wait(const QString &app, const QStringList &args, const QStringList &env, const QString &startup_id, const QDBusMessage &msg, QString &, QString &, int &)
{
    // handle method call org.kde.KLauncher.kdeinit_exec_wait
    static_cast<KLauncher *>(parent())->kdeinit_exec(app, args, QString(), env, startup_id, true, msg);
    return 0;                   // delayed reply
}

int KLauncherAdaptor::kdeinit_exec_with_workdir(const QString &app, const QStringList &args, const QString &workdir, const QStringList &env, const QString &startup_id, const QDBusMessage &msg, QString &, QString &, int &)
{
    // handle method call org.kde.KLauncher.kdeinit_exec_with_workdir
    static_cast<KLauncher *>(parent())->kdeinit_exec(app, args, workdir, env, startup_id, false, msg);
    return 0;                   // delayed reply
}

void KLauncherAdaptor::reparseConfiguration()
{
    // handle method call org.kde.KLauncher.reparseConfiguration
    static_cast<KLauncher *>(parent())->reparseConfiguration();
}

void KLauncherAdaptor::setLaunchEnv(const QString &name, const QString &value)
{
    // handle method call org.kde.KLauncher.setLaunchEnv
    static_cast<KLauncher *>(parent())->setLaunchEnv(name, value);
}

int KLauncherAdaptor::start_service_by_desktop_name(const QString &serviceName, const QStringList &urls, const QStringList &envs, const QString &startup_id, bool blind, const QDBusMessage &msg, QString &dbusServiceName, QString &error, int &pid)
{
    // handle method call org.kde.KLauncher.start_service_by_desktop_name
    KLauncher *p = static_cast<KLauncher *>(parent());
    p->start_service_by_desktop_name(serviceName, urls, envs, startup_id, blind, msg);
    dbusServiceName = p->requestResult.dbusName;
    error = p->requestResult.error;
    pid = p->requestResult.pid;
    return p->requestResult.result;
}

int KLauncherAdaptor::start_service_by_desktop_path(const QString &serviceName, const QStringList &urls, const QStringList &envs, const QString &startup_id, bool blind, const QDBusMessage &msg, QString &dbusServiceName, QString &error, int &pid)
{
    // handle method call org.kde.KLauncher.start_service_by_desktop_path
    KLauncher *p = static_cast<KLauncher *>(parent());
    p->start_service_by_desktop_path(serviceName, urls, envs, startup_id, blind, msg);
    dbusServiceName = p->requestResult.dbusName;
    error = p->requestResult.error;
    pid = p->requestResult.pid;
    return p->requestResult.result;
}

void KLauncherAdaptor::terminate_kdeinit()
{
    KLauncher *p = static_cast<KLauncher *>(parent());
    p->terminate_kdeinit();
}

