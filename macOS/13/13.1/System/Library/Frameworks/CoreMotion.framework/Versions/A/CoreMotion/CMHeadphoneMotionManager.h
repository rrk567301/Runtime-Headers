@class CMHeadphoneMotionManagerInternal, CMDeviceMotion;
@protocol CMHeadphoneMotionManagerDelegate;

@interface CMHeadphoneMotionManager : NSObject {
    CMHeadphoneMotionManagerInternal *_internal;
}

@property (weak, nonatomic) id<CMHeadphoneMotionManagerDelegate> delegate;
@property (readonly, nonatomic, getter=isDeviceMotionAvailable) BOOL deviceMotionAvailable;
@property (readonly, nonatomic, getter=isDeviceMotionActive) BOOL deviceMotionActive;
@property (readonly) CMDeviceMotion *deviceMotion;

+ (long long)authorizationStatus;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startDeviceMotionUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startDeviceMotionUpdates;
- (void)stopDeviceMotionUpdates;
- (void)stopDeviceMotionUpdatesPrivate;
- (id)delegateQueuePrivate;
- (void)startDeviceMotionUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)resumeDeviceMotionStreamingPrivate;
- (void)onDeviceMotionPrivate:(id)a0;
- (void)onDeviceMotionEventPrivate:(id)a0;
- (void)notifyDeviceConnectedEventToClientPrivate;
- (void)notifyDeviceDisconnectedEventToClientPrivate;
- (void)pauseDeviceMotionStreamingPrivate;
- (void)applyInitialReferencePrivate:(id)a0;

@end
