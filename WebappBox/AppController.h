//
//  AppController.h
//  WebappBox
//
//  Created by Bruce Hsu on 12/8/20.
//  Copyright (c) 2012年 Szu-Kai Hsu (brucehsu). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

@interface AppController : NSObject {
@private
    IBOutlet NSTextField *url;
    IBOutlet WebView *webview;
    IBOutlet NSWindow *window;
}

-(IBAction) urlAction:(id)sender;

@end
