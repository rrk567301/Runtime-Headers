@class AVRouteDetectorInternal;

@interface AVRouteDetector : NSObject {
    AVRouteDetectorInternal *_routeDetectorInternal;
}

@property (getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled;
@property (readonly) BOOL multipleRoutesDetected;
@property (nonatomic) BOOL detectsCustomRoutes;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)_didEnterBackground;
- (void)_updateMultipleRoutesDetected;
- (void)_updateRouteDetectionEnabled;
- (BOOL)_isAirPlayDevicePresenceDetected;
- (BOOL)_isCustomRoutePresenceDetected;
- (void)_didEnterForeground;

@end
