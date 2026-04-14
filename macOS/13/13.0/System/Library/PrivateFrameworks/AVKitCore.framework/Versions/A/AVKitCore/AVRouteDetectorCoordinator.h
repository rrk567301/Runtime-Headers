@interface AVRouteDetectorCoordinator : NSObject

@property (nonatomic, getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled;
@property (readonly, nonatomic) BOOL multipleRoutesDetected;

+ (BOOL)multipleRoutesDetected;
+ (void)setMultipleRoutesDetected:(BOOL)a0;
+ (id)routeDetectorCoordinatorQueue;
+ (id)sharedSystemRouteDetector;
+ (void)beginDetectingRoutes;
+ (void)endDetectingRoutes;
+ (void)updateMultipleRoutesDetected;

- (void)dealloc;

@end
