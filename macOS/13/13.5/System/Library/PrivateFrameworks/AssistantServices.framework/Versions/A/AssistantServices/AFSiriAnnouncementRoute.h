@class NSString, NSDictionary;

@interface AFSiriAnnouncementRoute : NSObject {
    BOOL _hearingAidsAnnounceEnabled;
    BOOL _builtInSpeakerAnnounceEnabled;
    BOOL _isRouteCurrentlyPicked;
    BOOL _isDoAPCapable;
    BOOL _isHeadsetInEar;
    BOOL _headsetSupportsIED;
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
    NSString *_avAudioRouteName;
}

@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *btAddress;
@property (nonatomic) unsigned long long availableAnnouncementRequestTypes;
@property (retain, nonatomic) NSDictionary *avscRouteDescription;
@property (nonatomic) long long announcePlatformForRoute;

- (void).cxx_destruct;
- (long long)_announcementPlatform;
- (unsigned long long)_getRouteCapabilities;
- (void)_initializeInternalState;
- (BOOL)_isBuiltInSpeakerRoute;
- (BOOL)_isHearingAidsRoute;
- (id)initWithRouteDescription:(id)a0 hearingAidsAnnounceEnabled:(BOOL)a1 builtInSpeakerAnnounceEnabled:(BOOL)a2;

@end
