@class NSString, NSDictionary;

@interface AFSiriAudioRoute : NSObject {
    long long _ringerSwitchState;
    BOOL _hearingAidsAnnounceEnabled;
    BOOL _builtInSpeakerAnnounceEnabled;
    BOOL _isRouteCurrentlyPicked;
    BOOL _isDoAPCapable;
    BOOL _isHeadsetInEar;
    BOOL _headsetSupportsIED;
    BOOL _headsetSupportsFauxIED;
    BOOL _inEarDetectEnabledSpecified;
    BOOL _inEarDetectEnabled;
    BOOL _headsetSupportsAnnounceCalls;
    BOOL _isTipiRoute;
    BOOL _isOtherDeviceConnected;
    BOOL _isInTriangleMode;
    BOOL _shouldTakeRouteFromOtherConnectedDevice;
    BOOL _shouldDeferToOtherConnectedDevice;
    BOOL _isHearingAidsRoute;
    BOOL _isBuiltInSpeakerRoute;
    BOOL _isGenuineAppleAccessory;
}

@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *btAddress;
@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *connectedBTProductID;
@property (nonatomic) unsigned long long availableAnnouncementRequestTypes;
@property (retain, nonatomic) NSDictionary *avscRouteDescription;
@property (nonatomic) long long announcePlatformForRoute;

- (BOOL)isEqualToRoute:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)routeName;
- (long long)_announcementPlatform;
- (unsigned long long)_getRouteCapabilities;
- (void)_initializeInternalState;
- (BOOL)_isAppleHeadphone;
- (BOOL)_isBuiltInSpeakerRoute;
- (BOOL)_isHearingAidsRoute;
- (BOOL)hasAuthenticationCapability;
- (id)initWithName:(id)a0 uid:(id)a1 productId:(id)a2;
- (id)initWithRouteDescription:(id)a0 hearingAidsAnnounceEnabled:(BOOL)a1 builtInSpeakerAnnounceEnabled:(BOOL)a2 ringerSwitchState:(long long)a3;
- (BOOL)isBluetoothHeadset;
- (BOOL)isNonAnnounceSupportedWirelessHeadset;
- (BOOL)isRouteCurrentlyPicked;

@end
