@class NSUUID, NSString, HMDCameraResidentMessageHandler, HMDCameraSnapshotSessionID, HMDDevice, HMDCameraSnapshotRequestHandler, NSObject, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotReceiver : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) HMDCameraSnapshotRequestHandler *snapshotRequestHandler;
@property (readonly, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (readonly, nonatomic) HMDDevice *remoteDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_sendMessageWithName:(id)a0 payload:(id)a1 responseHandler:(id /* block */)a2;
- (void)_sendConfirmationToResident:(id /* block */)a0;
- (void)_sendRequestWithTierType:(unsigned long long)a0 toResident:(id /* block */)a1;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 accessory:(id)a2 uniqueIdentifier:(id)a3 snapshotRequestHandler:(id)a4 residentMessageHandler:(id)a5 remoteDevice:(id)a6;

@end
