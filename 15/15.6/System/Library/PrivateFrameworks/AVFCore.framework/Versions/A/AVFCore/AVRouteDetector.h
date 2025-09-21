@class AVRouteDetectorInternal;

@interface AVRouteDetector : NSObject {
    AVRouteDetectorInternal *_routeDetectorInternal;
}

@property (getter=isRouteDetectionEnabled) char routeDetectionEnabled;
@property (readonly) char multipleRoutesDetected;
@property (nonatomic) char detectsCustomRoutes;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)_didEnterBackground;
- (void)_didEnterForeground;
- (char)_isAirPlayDevicePresenceDetected;
- (char)_isCustomRoutePresenceDetected;
- (void)_updateMultipleRoutesDetected;
- (void)_updateRouteDetectionEnabled;

@end
