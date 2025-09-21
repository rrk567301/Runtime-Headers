@interface AVRouteDetectorCoordinator : NSObject

@property (nonatomic, getter=isRouteDetectionEnabled) char routeDetectionEnabled;
@property (readonly, nonatomic) char multipleRoutesDetected;

+ (char)multipleRoutesDetected;
+ (void)setMultipleRoutesDetected:(char)a0;
+ (void)beginDetectingRoutes;
+ (void)endDetectingRoutes;
+ (id)routeDetectorCoordinatorQueue;
+ (id)sharedSystemRouteDetector;
+ (void)updateMultipleRoutesDetected;

- (void)dealloc;

@end
