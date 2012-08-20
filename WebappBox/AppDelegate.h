//
//  AppDelegate.h
//  WebappBox
//
//  Created by Bruce Hsu on 12/8/20.
//  Copyright (c) 2012年 Szu-Kai Hsu (brucehsu). All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)theApplication;
@end
