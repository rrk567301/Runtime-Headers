@class HMFUnfairLock, _HMCameraProfile, _HMContext, NSUUID, NSString, NSObject, HMHome;
@protocol OS_dispatch_queue;

@interface _HMCameraControl : NSObject <HMFLogging, HMFMessageReceiver> {
    HMFUnfairLock *_lock;
}

@property (retain) _HMContext *context;
@property (weak) _HMCameraProfile *cameraProfile;
@property (readonly, copy) NSUUID *profileUniqueIdentifier;
@property (weak) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)initWithCameraProfile:(id)a0 profileUniqueIdentifier:(id)a1;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_registerNotificationHandlers;

@end
