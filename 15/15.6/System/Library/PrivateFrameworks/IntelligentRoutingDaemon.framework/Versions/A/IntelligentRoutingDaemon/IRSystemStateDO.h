@class NSString, NSDate;

@interface IRSystemStateDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *appInFocusBundleID;
@property (readonly, nonatomic) char appInFocusWindowValid;
@property (readonly, nonatomic) NSString *deviceWiFiSSID;
@property (readonly, nonatomic) int locationSemanticUserSpecificPlaceType;
@property (readonly, nonatomic) NSString *locationSemanticLoiIdentifier;
@property (readonly, nonatomic) NSString *iCloudId;
@property (readonly, nonatomic) NSString *avInitialRouteSharingPolicy;
@property (readonly, nonatomic) NSString *mediaRouteGroupLeaderOutputDeviceID;
@property (readonly, nonatomic) long long timeZoneSeconds;
@property (readonly, nonatomic) NSString *outputDeviceName;
@property (readonly, nonatomic) unsigned long long outputDeviceType;
@property (readonly, nonatomic) unsigned long long outputDeviceSubType;
@property (readonly, nonatomic) NSString *predictedOutputDeviceName;
@property (readonly, nonatomic) unsigned long long predictedOutputDeviceType;
@property (readonly, nonatomic) unsigned long long predictedOutputDeviceSubType;
@property (readonly, nonatomic) char appInFocusWindowScreenUnlockEvent;
@property (readonly, nonatomic) char pdrFenceActive;
@property (readonly, nonatomic) NSDate *latestPickerChoiceDate;
@property (readonly, nonatomic) char isContinuityDisplay;
@property (readonly, nonatomic) char displayOn;

+ (id)systemStateDOWithAppInFocusBundleID:(id)a0 appInFocusWindowValid:(char)a1 deviceWiFiSSID:(id)a2 locationSemanticUserSpecificPlaceType:(int)a3 locationSemanticLoiIdentifier:(id)a4 iCloudId:(id)a5 avInitialRouteSharingPolicy:(id)a6 mediaRouteGroupLeaderOutputDeviceID:(id)a7 timeZoneSeconds:(long long)a8 outputDeviceName:(id)a9 outputDeviceType:(unsigned long long)a10 outputDeviceSubType:(unsigned long long)a11 predictedOutputDeviceName:(id)a12 predictedOutputDeviceType:(unsigned long long)a13 predictedOutputDeviceSubType:(unsigned long long)a14 appInFocusWindowScreenUnlockEvent:(char)a15 pdrFenceActive:(char)a16 latestPickerChoiceDate:(id)a17 isContinuityDisplay:(char)a18 displayOn:(char)a19;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementAppInFocusBundleID:(id)a0;
- (id)copyWithReplacementAppInFocusWindowScreenUnlockEvent:(char)a0;
- (id)copyWithReplacementAppInFocusWindowValid:(char)a0;
- (id)copyWithReplacementAvInitialRouteSharingPolicy:(id)a0;
- (id)copyWithReplacementDeviceWiFiSSID:(id)a0;
- (id)copyWithReplacementDisplayOn:(char)a0;
- (id)copyWithReplacementICloudId:(id)a0;
- (id)copyWithReplacementIsContinuityDisplay:(char)a0;
- (id)copyWithReplacementLatestPickerChoiceDate:(id)a0;
- (id)copyWithReplacementLocationSemanticLoiIdentifier:(id)a0;
- (id)copyWithReplacementLocationSemanticUserSpecificPlaceType:(int)a0;
- (id)copyWithReplacementMediaRouteGroupLeaderOutputDeviceID:(id)a0;
- (id)copyWithReplacementOutputDeviceName:(id)a0;
- (id)copyWithReplacementOutputDeviceSubType:(unsigned long long)a0;
- (id)copyWithReplacementOutputDeviceType:(unsigned long long)a0;
- (id)copyWithReplacementPdrFenceActive:(char)a0;
- (id)copyWithReplacementPredictedOutputDeviceName:(id)a0;
- (id)copyWithReplacementPredictedOutputDeviceSubType:(unsigned long long)a0;
- (id)copyWithReplacementPredictedOutputDeviceType:(unsigned long long)a0;
- (id)copyWithReplacementTimeZoneSeconds:(long long)a0;
- (id)exportAsDictionary;
- (id)initWithAppInFocusBundleID:(id)a0 appInFocusWindowValid:(char)a1 deviceWiFiSSID:(id)a2 locationSemanticUserSpecificPlaceType:(int)a3 locationSemanticLoiIdentifier:(id)a4 iCloudId:(id)a5 avInitialRouteSharingPolicy:(id)a6 mediaRouteGroupLeaderOutputDeviceID:(id)a7 timeZoneSeconds:(long long)a8 outputDeviceName:(id)a9 outputDeviceType:(unsigned long long)a10 outputDeviceSubType:(unsigned long long)a11 predictedOutputDeviceName:(id)a12 predictedOutputDeviceType:(unsigned long long)a13 predictedOutputDeviceSubType:(unsigned long long)a14 appInFocusWindowScreenUnlockEvent:(char)a15 pdrFenceActive:(char)a16 latestPickerChoiceDate:(id)a17 isContinuityDisplay:(char)a18 displayOn:(char)a19;
- (char)isEqualToSystemStateDO:(id)a0;
- (char)isHeadphonesRoutedOrPredicted;
- (char)isInsideAppInFocusWindow;
- (char)isMiLoSupportedLocation;
- (id)overrideSystemStateIfNeeded:(id)a0;

@end
