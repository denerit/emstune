/**************************************************************************************
 * EMStudio - Open Source ECU tuning software                                         *
 * Copyright (C) 2013  Michael Carpenter (malcom2073@gmail.com)                       *
 *                                                                                    *
 * This file is a part of EMStudio                                                    *
 *                                                                                    *
 * EMStudio is free software; you can redistribute it and/or                          *
 * modify it under the terms of the GNU Lesser General Public                         *
 * License as published by the Free Software Foundation, version                      *
 * 2.1 of the License.                                                                *
 *                                                                                    *
 * EMStudio is distributed in the hope that it will be useful,                        *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of                     *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU                  *
 * Lesser General Public License and GNU General Public License for                   *
 * more details.                                                                      *
 *                                                                                    *
 * You should have received a copy of the GNU Lesser General Public License           *
 * along with this program; if not, write to Free Software Foundation, Inc.,          *
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA                       *
 *                                                                                    *
 *------------------------------------------------------------------------------------*
 *                                                                                    *
 * BSD 3-Clause License Usage                                                         *
 * Alternatively, this file may also be used under the terms of the                   *
 * BSD 3-Clause license, detailed below:                                              *
 *                                                                                    *
 * Redistribution and use in source and binary forms, with or without                 *
 * modification, are permitted provided that the following conditions are met:        *
 *     * Redistributions of source code must retain the above copyright               *
 *       notice, this list of conditions and the following disclaimer.                *
 *     * Redistributions in binary form must reproduce the above copyright            *
 *       notice, this list of conditions and the following disclaimer in the          *
 *       documentation and/or other materials provided with the distribution.         *
 *     * Neither the name EMStudio nor the                                            *
 *       names of its contributors may be used to endorse or promote products         *
 *       derived from this software without specific prior written permission.        *
 *                                                                                    *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND    *
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED      *
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE             *
 * DISCLAIMED. IN NO EVENT SHALL MICHAEL CARPENTER BE LIABLE FOR ANY                  *
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES         *
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;       *
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND        *
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT         *
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS      *
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                       *
 **************************************************************************************/

#ifndef TABLE3DMETADATA_H
#define TABLE3DMETADATA_H

#include <QString>
#include <QList>
#include <QPair>

class Table3DMetaData
{
public:
    Table3DMetaData() { xDp=2; yDp=2; zDp=2; valid=false;}
    QString tableTitle;
    bool valid;
    unsigned int size;
    unsigned short locationId;
    QString xAxisTitle;
    QString yAxisTitle;
    QString zAxisTitle;
    QString xHighlight;
    QString yHighlight;
    int xDp;
    int yDp;
    int zDp;
    QList<QPair<QString,double> > xAxisCalc;
    QList<QPair<QString,double> > yAxisCalc;
    QList<QPair<QString,double> > zAxisCalc;
};

#endif // TABLE3DMETADATA_H
