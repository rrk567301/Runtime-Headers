@class NSString, HMDCameraSnapshotRemoteRelayReceiver, HMDCameraSnapshotRemoteStreamSender, NSObject;
@protocol OS_dispatch_queue, HMDCameraSnapshotRemoteRelayStreamDelegate;

@interface HMDCameraSnapshotRemoteRelayStream : HMFObject <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDCameraSnapshotRemoteStreamSender *streamSender;
@property (readonly, nonatomic) HMDCameraSnapshotRemoteRelayReceiver *relayReceiver;
@property (readonly, weak, nonatomic) id<HMDCameraSnapshotRemoteRelayStreamDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_callDidCompleteSendImageDelegate:(id)a0;
- (void)_callDidStartCaptureImageDelegate;
- (void)_sendImageSendFailure:(id)a0;
- (void)getSnapshot:(unsigned long long)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 sourceDevice:(id)a2 remoteDevice:(id)a3 accessory:(id)a4 delegate:(id)a5 uniqueIdentifier:(id)a6 snapshotRequestHandler:(id)a7 residentMessageHandler:(id)a8;
- (void)snapshotRelayReceiver:(id)a0 didSaveSnapshotFile:(id)a1 error:(id)a2 sessionID:(id)a3;
- (void)snapshotRelayReceiver:(id)a0 didStartImageCaptureForSessionID:(id)a1;
- (void)snapshotSendFailed:(id)a0;
- (void)snapshotStreamSender:(id)a0 didCompleteSendImage:(id)a1 sessionID:(id)a2;
- (void)snapshotStreamSender:(id)a0 didStartImageCaptureForSessionID:(id)a1;
- (void)snapshotTransferComplete;

@end
