@class HMCameraView, NSUUID, _HMContext, NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface HMCameraSource : NSObject <HMFMessageReceiver, HMFLogging>

@property (retain) _HMContext *context;
@property (readonly, copy) NSUUID *profileUniqueIdentifier;
@property (readonly, copy) NSNumber *slotIdentifier;
@property (weak) HMCameraView *cameraView;
@property (readonly) double currentAspectRatio;
@property (readonly) double aspectRatio;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)fillSlotWithCompletionHandler:(id /* block */)a0;
- (id)initWithProfileUniqueIdentifier:(id)a0 slotIdentifier:(id)a1 aspectRatio:(id)a2;

@end
