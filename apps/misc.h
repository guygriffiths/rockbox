/***************************************************************************
 *             __________               __   ___.                  
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___  
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /  
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <   
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \  
 *                     \/            \/     \/    \/            \/ 
 * $Id$
 *
 * Copyright (C) 2002 by Daniel Stenberg
 *
 * All files in this archive are subject to the GNU General Public License.
 * See the file COPYING in the source tree root for full license agreement.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/

/* The point of this function would be to return a string of the input data,
   but never longer than 5 columns. Add suffix k and M when suitable...
   Make sure to have space for 6 bytes in the buffer. 5 letters plus the
   terminating zero byte. */
char *num2max5(unsigned int bytes, char *max5);

/* Read (up to) a line of text from fd into buffer and return number of bytes
 * read (which may be larger than the number of bytes stored in buffer). If 
 * an error occurs, -1 is returned (and buffer contains whatever could be 
 * read). A line is terminated by a LF char. Neither LF nor CR chars are 
 * stored in buffer.
 */
int read_line(int fd, char* buffer, int buffer_size);
