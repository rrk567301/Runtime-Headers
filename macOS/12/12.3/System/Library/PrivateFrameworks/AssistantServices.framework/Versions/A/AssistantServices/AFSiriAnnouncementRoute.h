@class NSString, NSDictionary;

@interface AFSiriAnnouncementRoute : NSObject {
    BOOL _isRouteCurrentlyPicked;
    BOOL _isDoAPCapable;
    BOOL _isHeadsetInEar;
    BOOL _inEarDetectSupportedSpecified;
    BOOL _headsetSupportsIED;
    BOOL _inEarDetectEnabledSpecified;
    BOOL _inEarDetectEnabled;
    BOOL _isW2Headset;
    BOOL _isTipiRoute;
    BOOL _isOtherDeviceConnected;
    BOOL _isInTriangleMode;
    BOOL _shouldTakeRouteFromOtherConnectedDevice;
    BOOL _shouldDeferToOtherConnectedDevice;
    NSString *_avAudioRouteName;
}

@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *btAddress;
@property (nonatomic) unsigned long long availableAnnouncementRequestTypes;
@property (retain, nonatomic) NSDictionary *avscRouteDescription;
@property (nonatomic) long long announcePlatformForRoute;

- (void).cxx_destruct;
- (long long)_announcementPlatform;
- (id)initWithRouteDescription:(id)a0;
- (void)_initializeInternalState;
- (unsigned long long)_getRouteCapabilities;

@end
