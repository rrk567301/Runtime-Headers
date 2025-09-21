@class HMDCameraSnapshotSessionID, NSString, HMDAccessory, NSObject;
@protocol OS_dispatch_queue, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotRequestHandlerProtocol;

@interface HMDCameraSnapshotLocal : HMFObject <HMFLogging, HMDCameraGetSnapshotProtocol>

@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDAccessory *accessory;
@property (weak, nonatomic) id<HMDCameraSnapshotLocalDelegate> delegate;
@property (readonly, nonatomic) id<HMDCameraSnapshotRequestHandlerProtocol> snapshotRequestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_getSnapshot:(unsigned long long)a0;
- (void)_handleSnapshotFile:(id)a0 error:(id)a1;
- (void)getSnapshot:(unsigned long long)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 accessory:(id)a2 delegate:(id)a3 snapshotRequestHandler:(id)a4;

@end
