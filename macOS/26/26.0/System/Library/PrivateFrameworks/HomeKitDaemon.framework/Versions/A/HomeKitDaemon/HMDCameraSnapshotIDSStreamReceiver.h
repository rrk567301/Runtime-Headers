@class HMDDevice, NSString;
@protocol HMDCameraSnapshotIDSStreamReceiverDelegate;

@interface HMDCameraSnapshotIDSStreamReceiver : HMDCameraSnapshotIDSStream <HMFLogging, IDSServiceDelegate>

@property (readonly) HMDDevice *remoteDevice;
@property (weak) id<HMDCameraSnapshotIDSStreamReceiverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 proxyService:(id)a2 delegate:(id)a3 remoteDevice:(id)a4;
- (void)_callFileReceivedAtURL:(id)a0 dateCaptured:(id)a1 error:(id)a2;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 remoteDevice:(id)a3;

@end
