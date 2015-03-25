//
//  ApptalkNinja.h
//  ApptalkNinjaSDK
//
//  Copyright (c) 2013 Virgo Systems Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>


/*!
 @abstract ApptalkNinja property types
 @constant ANPropertyRemoteLogging Remote logging enable property.
 @constant ANPropertyLogToConsole Log to console property.
 @constant ANPropertyLogToSTDERR Log to standart output property.
 @constant ANPropertyDefaultLogLevel Default log level property.
 @constant ANPropertyLogLevel Log level property.
 @constant ANPropertyCrashLogging Crash logging proprty.
 @constant ANPropertyInAppUpdate In App Update proprty.
 @constant ANPropertySplashScreen Splashscreen proprty.
 */
typedef NS_ENUM(NSInteger, ApptalkNinjaPropertyType) {
    ANPropertyRemoteLogging,
    ANPropertyLogToConsole,
    ANPropertyLogToSTDERR,
    ANPropertyDefaultLogLevel,
    ANPropertyLogLevel,
    ANPropertyCrashLogging,
    ANPropertyInAppUpdate,
    ANPropertySplashScreen,
    ANPropertyEnterpriseApp
};

/*!
 @abstract ApptalkNinja Log level types
 @constant ANLogLevelEmergency Emergency.
 @constant ANLogLevelAlert Alert.
 @constant ANLogLevelCritical Critical.
 @constant ANLogLevelError Error.
 @constant ANLogLevelWarning Warning.
 @constant ANLogLevelNotice Notice.
 @constant ANLogLevelInfo Info.
 @constant ANLogLevelDebug Debug.
 */
typedef NS_ENUM(NSInteger, ApptalkNinjaLogLevel) {
    ANLogLevelEmergency = 0,
    ANLogLevelAlert,
    ANLogLevelCritical,
    ANLogLevelError,
    ANLogLevelWarning,
    ANLogLevelNotice,
    ANLogLevelInfo,
    ANLogLevelDebug
};

#if __cplusplus
extern "C" {
#endif
    void ANLog(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);
    void ANLogv(NSString *format, va_list arg_list) NS_FORMAT_FUNCTION(1,0);
    
    void ANLogEmergency(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);
    void ANLogAlert(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);
    void ANLogCritical(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);;
    void ANLogError(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);
    void ANLogWarning(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);
    void ANLogNotice(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);
    void ANLogInfo(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);
    void ANLogDebug(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);
    
    void ANLogEmergencyEx(NSException *exception, NSString *format, ...) NS_FORMAT_FUNCTION(2,3);
    void ANLogAlertEx(NSException *exception, NSString *format, ...) NS_FORMAT_FUNCTION(2,3);
    void ANLogCriticalEx(NSException *exception, NSString *format, ...) NS_FORMAT_FUNCTION(2,3);
    void ANLogErrorEx(NSException *exception, NSString *format, ...) NS_FORMAT_FUNCTION(2,3);
    void ANLogWarningEx(NSException *exception, NSString *format, ...) NS_FORMAT_FUNCTION(2,3);
    void ANLogNoticeEx(NSException *exception, NSString *format, ...) NS_FORMAT_FUNCTION(2,3);
    void ANLogInfoEx(NSException *exception, NSString *format, ...) NS_FORMAT_FUNCTION(2,3);
    void ANLogDebugEx(NSException *exception, NSString *format, ...) NS_FORMAT_FUNCTION(2,3);
#if __cplusplus
}
#endif

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

+ (void)enableExperimentalMode:(BOOL)experimentalmode;

+ (BOOL)isSafeMode;

+ (BOOL)isExperimentalMode;

+ (void)useForDeviceIdentifier:(NSString *) deviceId;

+ (NSString*)getDeviceIdentifier;

+ (void)disableHTTPMonitoring:(BOOL)monitoringMode;

+ (void)disableDeviceMonitoring:(BOOL)deviceMode;

+ (BOOL)isDeviceMonitoring;

+ (BOOL)isHTTPMonitoring;

/*!
 @abstract
 Set up properties
 @param property
 Propery
 @param value
 value for the property
 */
+ (void)setProperty:(ApptalkNinjaPropertyType)property value:(id)value;


@end

@protocol SafeNinja

@required

- (void) ninjaMe;

@end

