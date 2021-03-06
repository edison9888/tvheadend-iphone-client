//
//  TVHAutoRecStore.h
//  TvhClient
//
//  Created by zipleen on 3/14/13.
//  Copyright 2013 Luis Fernandes
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import "TVHAutoRecItem.h"

@class TVHServer;

@protocol TVHAutoRecStoreDelegate <NSObject>
@optional
- (void)didLoadDvrAutoRec;
- (void)didErrorDvrAutoStore:(NSError*)error;
@end

@interface TVHAutoRecStore : NSObject
@property (nonatomic, weak) TVHServer *tvhServer;
@property (nonatomic, weak) id <TVHAutoRecStoreDelegate> delegate;
- (id)initWithTvhServer:(TVHServer*)tvhServer;
- (void)fetchDvrAutoRec;

- (TVHAutoRecItem *)objectAtIndex:(int)row;
- (int)count;
@end
