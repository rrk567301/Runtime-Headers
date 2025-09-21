@class AVRouteDetectorInternal;

@interface AVRouteDetector : NSObject {
    AVRouteDetectorInternal *_routeDetectorInternal;
}

@property (getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled;
@property (readonly) BOOL multipleRoutesDetected;
@property (nonatomic) BOOL detectsCustomRoutes;

+ (void)initialize;

- (void)_didEnterBackground;
- (void)dealloc;
- (id)init;
- (void)_didEnterForeground;
- (BOOL)_isAirPlayDevicePresenceDetected;
- (BOOL)_isCustomRoutePresenceDetected;
- (void)_updateMultipleRoutesDetected;
- (void)_updateRouteDetectionEnabled;

@end
