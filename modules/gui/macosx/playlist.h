/*****************************************************************************
 * playlist.h: MacOS X interface module
 *****************************************************************************
 * Copyright (C) 2002-2004 VideoLAN
 * $Id$
 *
 * Authors: Jon Lech Johansen <jon-vl@nanocrew.net>
 *          Derk-Jan Hartman <hartman at videolan dot org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA.
 *****************************************************************************/

/*****************************************************************************
 * VLCPlaylistView interface 
 *****************************************************************************/
@interface VLCPlaylistView : NSOutlineView
{
}

@end

/*****************************************************************************
 * VLCPlaylist interface 
 *****************************************************************************/
@interface VLCPlaylist : NSObject
{
    IBOutlet id o_btn_playlist;
    IBOutlet id o_outline_view;
}

- (void)initStrings;

- (void)appendArray:(NSArray*)o_array atPos:(int)i_position enqueue:(BOOL)b_enqueue;
@end

