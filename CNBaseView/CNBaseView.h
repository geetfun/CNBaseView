//
//  CNBaseView.h
//
//  Created by cocoa:naut on 23.07.12.
//  Copyright (c) 2012 cocoa:naut. All rights reserved.
//

/*
 The MIT License (MIT)
 Copyright © 2012 Frank Gregor, <phranck@cocoanaut.com>

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the “Software”), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

#import <Cocoa/Cocoa.h>

@interface CNBaseView : NSView

/**
 An image that is shown centered of the view.
 */
@property (strong, nonatomic) NSImage *icon;

/**
 A string with a message.
 
 This string will be show below the icon in a distance of the value by iconTextMargin.
 */
@property (strong, nonatomic) NSString *text;

/**
 ...
 */
@property (strong, nonatomic) NSAttributedString *attributedText;

/**
 ...
 */
@property (assign, nonatomic) CGFloat textBoxWidth;

/**
 ...
 */
@property (assign, nonatomic) CGFloat iconVerticalOffset;

/**
 ...
 */
@property (assign, nonatomic) CGFloat iconTextMargin;
@end