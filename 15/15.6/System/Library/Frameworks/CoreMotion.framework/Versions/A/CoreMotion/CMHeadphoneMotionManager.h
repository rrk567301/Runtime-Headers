@class CMHeadphoneMotionManagerInternal, CMDeviceMotion;
@protocol CMHeadphoneMotionManagerDelegate;

@interface CMHeadphoneMotionManager : NSObject {
    CMHeadphoneMotionManagerInternal *_internal;
}

@property (weak, nonatomic) id<CMHeadphoneMotionManagerDelegate> delegate;
@property (readonly, nonatomic, getter=isConnectionStatusActive) char connectionStatusActive;
@property (readonly, nonatomic, getter=isDeviceMotionAvailable) char deviceMotionAvailable;
@property (readonly, nonatomic, getter=isDeviceMotionActive) char deviceMotionActive;
@property (readonly) CMDeviceMotion *deviceMotion;

+ (long long)authorizationStatus;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopDeviceMotionUpdates;
- (void)applyInitialReferencePrivate:(id)a0;
- (id)delegateQueuePrivate;
- (char)hasConnectionClients;
- (void)notifyDeviceConnectedEventToClientPrivate;
- (void)notifyDeviceDisconnectedEventToClientPrivate;
- (void)onDeviceMotionPrivate:(id)a0;
- (void)onStatusEventPrivate:(id)a0;
- (void)pauseDeviceMotionStreamingPrivate;
- (void)pauseStatusStreamingPrivate;
- (void)resumeDeviceMotionStreamingPrivate;
- (void)resumeStatusStreamingPrivate;
- (void)startConnectionStatusUpdates;
- (void)startDeviceMotionUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startStatusUpdatesPrivate;
- (void)stopConnectionStatusUpdates;
- (void)stopDeviceMotionUpdatesPrivate;
- (void)stopStatusUpdatesPrivate;

@end
