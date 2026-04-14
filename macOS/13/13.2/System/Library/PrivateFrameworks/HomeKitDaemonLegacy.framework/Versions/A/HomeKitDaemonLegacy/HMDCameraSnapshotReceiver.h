@class NSUUID, HMDSnapshotRequestHandler, HMDSnapshotFile, HMDCameraSnapshotMetrics, NSString, HMDCameraResidentMessageHandler, HMDCameraSnapshotSessionID, NSObject, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotReceiver : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) HMDSnapshotFile *snapshotFile;
@property (readonly, nonatomic) HMDSnapshotRequestHandler *snapshotRequestHandler;
@property (readonly, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (retain, nonatomic) HMDCameraSnapshotMetrics *snapshotMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)_sendMessageWithName:(id)a0 payload:(id)a1 responseHandler:(id /* block */)a2;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 accessory:(id)a2 delegateQueue:(id)a3 uniqueIdentifier:(id)a4 snapshotRequestHandler:(id)a5 residentMessageHandler:(id)a6;
- (id)_sendRequestWithTierType:(unsigned long long)a0 toResident:(id /* block */)a1;
- (void)_sendConfirmationToResident:(id /* block */)a0;

@end
