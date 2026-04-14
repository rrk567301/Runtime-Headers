@class NSObject;
@protocol OS_dispatch_queue, BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate;

@interface BWDeviceOrientationMonitor : NSObject {
    int _orientationDispatchToken;
    NSObject<OS_dispatch_queue> *_orientationNotificationDispatchQueue;
    struct OpaqueFigSimpleMutex { } *_stateMutex;
}

@property (readonly, nonatomic) int mostRecentPortraitLandscapeOrientation;
@property (readonly, nonatomic) int currentOrientation;
@property (nonatomic) id<BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> portraitLandscapeUpdateDelegate;

+ (void)initialize;

- (BOOL)start;
- (void)dealloc;
- (BOOL)stop;
- (id)init;
- (int)rotationDegreesFromOrientation:(int)a0 isFrontCamera:(BOOL)a1 isExternalCamera:(BOOL)a2 isMirrored:(BOOL)a3 clientExpectsCameraMountedInLandscapeOrientation:(BOOL)a4;

@end
