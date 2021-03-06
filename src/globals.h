/*
  This file is part of Shuriken Beat Slicer.

  Copyright (C) 2014, 2015 Andrew M Taylor <a.m.taylor303@gmail.com>

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program. If not, see <https://www.gnu.org/licenses/>
  or write to the Free Software Foundation, Inc., 51 Franklin Street,
  Fifth Floor, Boston, MA  02110-1301, USA.

*/

#ifndef GLOBALS_H
#define GLOBALS_H

#include <QGraphicsItem>


#define APPLICATION_NAME            "Shuriken"
#define JUCE_JACK_CLIENT_NAME       APPLICATION_NAME
#define JUCE_ALSA_MIDI_INPUT_NAME   "Midi_In"

#define AUDIO_CONFIG_FILE_PATH      "~/.shuriken/audioconfig.xml"
#define PATHS_CONFIG_FILE_PATH      "~/.shuriken/pathsconfig.xml"

#define FILE_EXTENSION              ".shuriken"


namespace RecentProjects
{
    const int MAX = 5;
}


namespace InputChannels
{
    const int MIN = 0;
    const int MAX = 0;
}


namespace OutputChannels
{
    const int MIN = 2;
    const int MAX = 32;
}


namespace UserTypes
{
    const int WAVEFORM       = QGraphicsItem::UserType + 1;
    const int SLICE_POINT    = QGraphicsItem::UserType + 2;
    const int LOOP_MARKER    = QGraphicsItem::UserType + 3;
}


namespace ZValues
{
    const int WAVEFORM               = 0;
    const int SELECTED_WAVEFORM      = 1;
    const int SLICE_POINT            = 2;
    const int SELECTED_SLICE_POINT   = 3;
    const int PLAYHEAD               = 4;
    const int BPM_RULER              = 5;
    const int BPM_RULER_TEXT         = 6;
}


namespace BpmRuler
{
    const qreal HEIGHT = 18.0;
}


namespace Midi
{
    const int MIDDLE_C       = 60;
    const int MAX_POLYPHONY  = 128;
}


namespace Jack
{
    /* This gets set in: mainwindow.cpp
                         int nsmOpenCallback( ... )

       and is read in:   JuceLibraryCode/modules/juce_audio_devices/native/jack_device.h
                         void getDefaultJackClientConfig (JackClientConfig &conf)
    */
    extern QString g_clientId;
}


#endif // GLOBALS_H
