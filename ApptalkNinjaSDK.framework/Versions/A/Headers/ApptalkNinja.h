//
//  TestJockey.h
//  TestJockeySDK
//
//  Copyright (c) 2013 Virgo Systems Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ApptalkNinja;

/*!
 @class ApptalkNinja
 @abstract SDK uses for actions.
 */
@interface ApptalkNinja : NSObject



/*!
 @abstract
 Play method for starting the application
 @param apiKey
        API-KEY from the site for this application

 */
+ (void)startQuest:(NSString *)apiKey;

+ (void)enableSafeMode:(BOOL)safeMode;

+ (void)enableWiFiMode:(BOOL)wifiMode;

+ (BOOL)isSafeMode;

+ (void)useForDeviceIdentifier:(NSString *) deviceId;

+ (NSString*)getDeviceIdentifier;

@end

@protocol SafeNinja

@required

- (void) ninjaMe;

@end