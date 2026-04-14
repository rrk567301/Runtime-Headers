@class NSString, NSDictionary;

@interface AFSiriAnnouncementRoute : NSObject {
    BOOL _hearingAidsAnnounceEnabled;
    BOOL _builtInSpeakerAnnounceEnabled;
    BOOL _isRouteCurrentlyPicked;
    BOOL _isDoAPCapable;
    BOOL _isHeadsetInEar;
    BOOL _inEarDetectSupportedSpecified;
    BOOL _headsetSupportsIED;
    BOOL _inEarDetectEnabledSpecified;
    BOOL _inEarDetectEnabled;
    BOOL _headsetSupportsAnnounce;
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
- (id)initWithRouteDescription:(id)a0 hearingAidsAnnounceEnabled:(BOOL)a1 builtInSpeakerAnnounceEnabled:(BOOL)a2;
- (void)_initializeInternalState;
- (unsigned long long)_getRouteCapabilities;
- (BOOL)_isBuiltInSpeakerRoute;
- (BOOL)_isHearingAidsRoute;

@end
