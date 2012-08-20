//
//  AppController.m
//  WebappBox
//
//  Created by Bruce Hsu on 12/8/20.
//  Copyright (c) 2012年 Szu-Kai Hsu (brucehsu). All rights reserved.
//

#import "AppController.h"

@implementation AppController

-(IBAction) urlAction:(id)sender {
    NSURL *url = [NSURL URLWithString:[sender stringValue]];
    [[webview mainFrame] loadRequest:[NSURLRequest requestWithURL:url]];
}

-(IBAction) alwaysOnTopAction:(id)sender {
    if([window level]==NSFloatingWindowLevel) {
        [window setLevel:NSNormalWindowLevel];
    } else {
        [window setLevel:NSFloatingWindowLevel];
    }
}

-(IBAction)lockResizeAction:(id)sender {
    [window setStyleMask:[window styleMask]^NSResizableWindowMask];
    [window update];
}

@end
