//
//  BCOVPulseVideoItem.h
//  BasicPulsetvOSPlayer
//
//  Created by Carlos Ceja on 2/18/20.
//  Copyright © 2020 Carlos Ceja. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface BCOVPulseVideoItem : NSObject

+ (BCOVPulseVideoItem *)initWithDictionary:(NSDictionary *)dictionary;

/**
*  The title of this content, for displaying in the content list.
 */
@property (nonatomic) NSString *title;

/**
*  A string category used to target ad campaigns.
 */
@property (nonatomic) NSString *category;

/**
*  An array of string tags used to target ad campaigns.
 */
@property (nonatomic) NSArray<NSString *> *tags;

/**
* An array of string flags used to target ad campaigns.
 */
@property (nonatomic) NSArray<NSString *> *flags;

/**
*  An array of numbers of positions (in seconds) where midroll ad breaks
*  may occur.
*/
@property (nonatomic) NSArray<NSNumber *> *midrollPositions;

/**
*  A boolean value used to extend the session.
 */
@property (nonatomic, assign) BOOL extendSession;

@end
