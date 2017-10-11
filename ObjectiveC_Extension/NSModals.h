//
//  NSModals.h
//  ObjectiveC_Extension
//
//  Created by Vitor Marques de Miranda on 11/10/2017.
//  Copyright © 2017 VitorMM. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSModals : NSObject

+(NSWindow*)modalsWindow;
+(void)alertsShouldRunOnWindow:(NSWindow*)window whenCalledDuringBlock:(void (^) (void))block;

@end
