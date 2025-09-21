@class NSString, HMDCameraSnapshotIDSRelayReceiver;
@protocol HMDCameraSnapshotRemoteRelayReceiverDelegate;

@interface HMDCameraSnapshotRemoteRelayReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSRelayReceiverDelegate, HMFLogging>

@property (weak, nonatomic) id<HMDCameraSnapshotRemoteRelayReceiverDelegate> delegate;
@property (retain, nonatomic) HMDCameraSnapshotIDSRelayReceiver *relayReceiver;
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
- (void)relayReceiver:(id)a0 didReceiveData:(id)a1 error:(id)a2;
- (void)relayReceiverDidAcceptIDSInvitation:(id)a0;
- (void)relayReceiverIDSSessionDidStart:(id)a0;
- (void)snapshotSendFailed:(id)a0;

@end
