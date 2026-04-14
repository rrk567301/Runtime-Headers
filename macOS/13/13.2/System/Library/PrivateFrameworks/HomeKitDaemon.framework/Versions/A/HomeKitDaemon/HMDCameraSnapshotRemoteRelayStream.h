@class NSString, HMDCameraSnapshotRemoteRelayReceiver, HMDCameraSnapshotRemoteStreamSender, NSObject;
@protocol OS_dispatch_queue, HMDCameraSnapshotRemoteRelayStreamDelegate;

@interface HMDCameraSnapshotRemoteRelayStream : HMFObject <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDCameraSnapshotRemoteStreamSender *streamSender;
@property (readonly, nonatomic) HMDCameraSnapshotRemoteRelayReceiver *relayReceiver;
@property (readonly, weak, nonatomic) id<HMDCameraSnapshotRemoteRelayStreamDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)snapshotStreamSender:(id)a0 didStartCaptureImage:(id)a1 sessionID:(id)a2;
- (void)snapshotStreamSender:(id)a0 didCompleteSendImage:(id)a1 sessionID:(id)a2;
- (void)getSnapshot:(unsigned long long)a0;
- (void)snapShotTransferComplete;
- (void)_callDidStartCaptureImageDelegate:(id)a0;
- (void)_callDidCompleteSendImageDelegate:(id)a0;
- (void)_sendImageSendFailure:(id)a0;
- (void)snapShotSendFailed:(id)a0;
- (void)snapshotRelayReceiver:(id)a0 didStartGettingImage:(id)a1 sessionID:(id)a2;
- (void)snapshotRelayReceiver:(id)a0 didSaveSnapshotFile:(id)a1 error:(id)a2 sessionID:(id)a3;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 device:(id)a2 accessory:(id)a3 delegate:(id)a4 delegateQueue:(id)a5 uniqueIdentifier:(id)a6 snapshotRequestHandler:(id)a7 residentMessageHandler:(id)a8;

@end
