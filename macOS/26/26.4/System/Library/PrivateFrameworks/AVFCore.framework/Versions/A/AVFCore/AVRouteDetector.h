@class AVRouteDetectorInternal;

@interface AVRouteDetector : NSObject {
    AVRouteDetectorInternal *_routeDetectorInternal;
}

@property (getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled;
@property (readonly) BOOL multipleRoutesDetected;
@property (nonatomic) BOOL detectsCustomRoutes;

+ (void)initialize;

- (id)init;
- (void)_didEnterBackground;
- (void)dealloc;
- (void)_didEnterForeground;
- (BOOL)_isAirPlayDevicePresenceDetected;
- (BOOL)_isCustomRoutePresenceDetected;
- (void)_updateMultipleRoutesDetected;
- (void)_updateRouteDetectionEnabled;

@end
