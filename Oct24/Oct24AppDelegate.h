//
//  Oct24AppDelegate.h
//  Oct24
//
//  Created by Samantha Kapai on 12/19/12.
//  Copyright (c) 2012 Samantha Kapai. All rights reserved.
//

#import <UIKit/UIKit.h>
@class View;

@interface Oct24AppDelegate : UIResponder <UIApplicationDelegate> {
    View *view;
    UIWindow *_window;
}

@property (strong, nonatomic) UIWindow *window;
@end
