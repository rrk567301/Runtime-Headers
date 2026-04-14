@class HMDCameraSnapshotLocal, HMDCameraSnapshotIDSStreamInitiator, NSString;
@protocol HMDCameraSnapshotRemoteStreamSenderDelegate;

@interface HMDCameraSnapshotRemoteStreamSender : HMDCameraSnapshotSender <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSStreamInitiatorDelegate, HMFLogging>

@property (readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal;
@property (readonly, weak, nonatomic) id<HMDCameraSnapshotRemoteStreamSenderDelegate> delegate;
@property (readonly, nonatomic) HMDCameraSnapshotIDSStreamInitiator *streamInitiator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)dealloc;
- (void)_callDidCompleteSendImageDelegate:(id)a0;
- (void)_callDidStartCaptureImageDelegate;
- (void)getSnapshot:(unsigned long long)a0;
- (id)initWithSessionInfo:(id)a0 workQueue:(id)a1 device:(id)a2 accessory:(id)a3 delegate:(id)a4 uniqueIdentifier:(id)a5 snapshotRequestHandler:(id)a6;
- (void)sendSnapshotAtPath:(id)a0;
- (void)snapshotLocal:(id)a0 didSaveSnapshotFile:(id)a1 error:(id)a2 sessionInfo:(id)a3;
- (void)snapshotTransferComplete;
- (void)streamInitiator:(id)a0 didFailToSendFileWithError:(id)a1;

@end
