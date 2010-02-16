/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import "TiUITextWidget.h"

@interface TiUITextArea : TiUITextWidget <UITextViewDelegate>
{
@protected
	UIToolbar *toolbar;
	CGFloat toolbarHeight;
	NSArray *toolbarItems;
	
@private
	BOOL returnActive;
}

@end
