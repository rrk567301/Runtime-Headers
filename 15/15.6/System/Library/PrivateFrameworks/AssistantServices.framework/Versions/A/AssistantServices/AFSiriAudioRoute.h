@class NSString, NSDictionary;

@interface AFSiriAudioRoute : NSObject {
    long long _ringerSwitchState;
    char _hearingAidsAnnounceEnabled;
    char _builtInSpeakerAnnounceEnabled;
    char _isRouteCurrentlyPicked;
    char _isDoAPCapable;
    char _isHeadsetInEar;
    char _headsetSupportsIED;
    char _headsetSupportsFauxIED;
    char _inEarDetectEnabledSpecified;
    char _inEarDetectEnabled;
    char _headsetSupportsAnnounceCalls;
    char _isTipiRoute;
    char _isOtherDeviceConnected;
    char _isInTriangleMode;
    char _shouldTakeRouteFromOtherConnectedDevice;
    char _shouldDeferToOtherConnectedDevice;
    char _isHearingAidsRoute;
    char _isBuiltInSpeakerRoute;
    char _isGenuineAppleAccessory;
    NSString *_avAudioRouteName;
}

@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *btAddress;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *connectedBTProductID;
@property (nonatomic) unsigned long long availableAnnouncementRequestTypes;
@property (retain, nonatomic) NSDictionary *avscRouteDescription;
@property (nonatomic) long long announcePlatformForRoute;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (char)isEqualToRoute:(id)a0;
- (id)routeName;
- (long long)_announcementPlatform;
- (unsigned long long)_getRouteCapabilities;
- (void)_initializeInternalState;
- (char)_isBuiltInSpeakerRoute;
- (char)_isHearingAidsRoute;
- (char)hasAuthenticationCapability;
- (id)initWithRouteDescription:(id)a0 hearingAidsAnnounceEnabled:(char)a1 builtInSpeakerAnnounceEnabled:(char)a2 ringerSwitchState:(long long)a3;
- (char)isRouteCurrentlyPicked;
- (char)isThirdPartyBluetoothHeadset;

@end
