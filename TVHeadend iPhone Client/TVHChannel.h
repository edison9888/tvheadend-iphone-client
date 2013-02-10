//
//  Channel.h
//  TVHeadend iPhone Client
//
//  Created by zipleen on 2/3/13.
//  Copyright (c) 2013 zipleen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TVHEpg.h"
@class TVHEpg;

@interface TVHChannel : NSObject
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *detail;
@property (nonatomic, strong) NSString *imageUrl;
@property (nonatomic, strong) NSString *number;
@property (nonatomic, strong) NSData *image;
@property (nonatomic) NSInteger chid;
@property (nonatomic, strong) NSArray *tags;

-(bool) hasTag:(NSInteger)tag;
-(NSString*) streamURL;
-(void) addEpg:(TVHEpg*)epg;
-(NSString*) getCurrentPlayingProgram;
-(NSArray*) getEpg;
-(NSInteger) countEpg;
@end
