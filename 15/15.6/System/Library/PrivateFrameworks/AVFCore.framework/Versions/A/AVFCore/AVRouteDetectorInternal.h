@class AVOutputDeviceDiscoverySession, NSObject;
@protocol OS_dispatch_queue;

@interface AVRouteDetectorInternal : NSObject {
    char routeDetectionEnabled;
    char multipleRoutesDetected;
    char detectsCustomRoutes;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVOutputDeviceDiscoverySession *outputDeviceDiscoverySession;
    id outputDevicesChangeNotificationToken;
    id didEnterBackgroundNotificationToken;
    id didEnterForegroundNotificationToken;
    char customRoutesPresent;
    char routeDetectionSuspended;
}

@end
