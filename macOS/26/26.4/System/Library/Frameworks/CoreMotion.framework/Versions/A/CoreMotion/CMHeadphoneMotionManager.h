@class CMHeadphoneMotionManagerInternal, CMDeviceMotion;
@protocol CMHeadphoneMotionManagerDelegate;

@interface CMHeadphoneMotionManager : NSObject {
    CMHeadphoneMotionManagerInternal *_internal;
}

@property (nonatomic) long long deviceMotionBodyFrame;
@property (weak, nonatomic) id<CMHeadphoneMotionManagerDelegate> delegate;
@property (readonly, nonatomic, getter=isConnectionStatusActive) BOOL connectionStatusActive;
@property (readonly, nonatomic, getter=isDeviceMotionAvailable) BOOL deviceMotionAvailable;
@property (readonly, nonatomic, getter=isDeviceMotionActive) BOOL deviceMotionActive;
@property (readonly) CMDeviceMotion *deviceMotion;

+ (long long)authorizationStatus;

- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)stopDeviceMotionUpdatesPrivate;
- (id)init;
- (void)startDeviceMotionUpdates;
- (void)dealloc;
- (void)applyInitialReferencePrivate:(id)a0;
- (id)delegateQueuePrivate;
- (BOOL)hasConnectionClients;
- (void)notifyDeviceConnectedEventToClientPrivate;
- (void)notifyDeviceDisconnectedEventToClientPrivate;
- (void)onDeviceMotionPrivate:(id)a0;
- (void)onStatusEventPrivate:(id)a0;
- (void)pauseDeviceMotionStreamingPrivate;
- (void)pauseStatusStreamingPrivate;
- (void)resumeDeviceMotionStreamingPrivate;
- (void)resumeStatusStreamingPrivate;
- (void)startConnectionStatusUpdates;
- (void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(unsigned long long)a0 bodyFrame:(long long)a1 toQueue:(id)a2 withHandler:(id /* block */)a3;
- (void)startStatusUpdatesPrivate;
- (void)stopConnectionStatusUpdates;
- (void)stopStatusUpdatesPrivate;

@end
