@class NSString, HMDCameraSnapshotIDSStreamReceiver;
@protocol HMDCameraSnapshotRemoteStreamReceiverDelegate;

@interface HMDCameraSnapshotRemoteStreamReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSStreamReceiverDelegate, HMFLogging>

@property (readonly, weak, nonatomic) id<HMDCameraSnapshotRemoteStreamReceiverDelegate> delegate;
@property (retain, nonatomic) HMDCameraSnapshotIDSStreamReceiver *relayReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_callDidSaveImageDelegateWithSnapshotFile:(id)a0 error:(id)a1;
- (void)_callDidStartImageCaptureDelegate;
- (void)_getSnapshot:(unsigned long long)a0;
- (void)getSnapshot:(unsigned long long)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 accessory:(id)a2 delegate:(id)a3 uniqueIdentifier:(id)a4 snapshotRequestHandler:(id)a5 residentMessageHandler:(id)a6 remoteDevice:(id)a7;
- (void)snapshotSendFailed:(id)a0;
- (void)streamReceiver:(id)a0 didReceiveFileAtURL:(id)a1 dateCaptured:(id)a2 error:(id)a3;

@end
