@class CMHeadphoneActivityManagerInternal;

@interface CMHeadphoneActivityManager : NSObject {
    CMHeadphoneActivityManagerInternal *_internal;
}

@property (readonly, nonatomic, getter=isActivityAvailable) char activityAvailable;
@property (readonly, nonatomic, getter=isActivityActive) char activityActive;
@property (readonly, nonatomic, getter=isStatusAvailable) char statusAvailable;
@property (readonly, nonatomic, getter=isStatusActive) char statusActive;

+ (long long)authorizationStatus;

- (void)dealloc;
- (id)init;
- (void)startActivityUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopActivityUpdates;
- (char)hasConnectionClients;
- (char)mslLoggingEnabled;
- (void)notifyDeviceConnectedEventToClientPrivate;
- (void)notifyDeviceDisconnectedEventToClientPrivate;
- (void)onActivityPrivate:(id)a0 error:(id)a1;
- (void)onStatusEventPrivate:(id)a0;
- (void)pauseActivityStreamingPrivate;
- (void)pauseStatusStreamingPrivate;
- (void)resumeActivityStreamingPrivate;
- (void)resumeStatusStreamingPrivate;
- (void)startActivityUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startMslLoggingWithFilenamePrefix:(id)a0 filePath:(id)a1;
- (void)startStatusUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startStatusUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopActivityUpdatesPrivate;
- (void)stopMslLogging;
- (void)stopStatusUpdates;
- (void)stopStatusUpdatesPrivate;

@end
