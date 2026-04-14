@class NSString;
@protocol HMDCameraSnapshotIDSStreamInitiatorDelegate;

@interface HMDCameraSnapshotIDSStreamInitiator : HMDCameraSnapshotIDSStream <HMFLogging, IDSServiceDelegate>

@property (readonly, copy) NSString *destinationID;
@property (weak) id<HMDCameraSnapshotIDSStreamInitiatorDelegate> delegate;
@property (copy) NSString *sendFileIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)dealloc;
- (void)sendFile:(id)a0;
- (void)_callFileTransferFailedWithError:(id)a0;
- (id)initWithSessionInfo:(id)a0 workQueue:(id)a1 destinationID:(id)a2 delegate:(id)a3;
- (id)initWithSessionInfo:(id)a0 workQueue:(id)a1 proxyService:(id)a2 destinationID:(id)a3 delegate:(id)a4;

@end
