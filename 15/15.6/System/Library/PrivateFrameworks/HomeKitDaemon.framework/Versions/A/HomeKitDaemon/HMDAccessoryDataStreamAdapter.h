@class NSString, NSDictionary, NSObject, HMDHAPAccessory;
@protocol HMDAccessoryDataStreamAdapterDelegate, OS_dispatch_queue, HMDDataStreamBulkSendSession;

@interface HMDAccessoryDataStreamAdapter : HMFObject <HMFLogging, HMDDataStreamBulkSendListener>

@property (readonly, getter=isSessionOpenInProgress) char sessionOpenInProgress;
@property (readonly, getter=isBulkSendActive) char bulkSendActive;
@property (retain) id<HMDDataStreamBulkSendSession> currentBulkSendSession;
@property (copy) id /* block */ pendingOpenSessionCallback;
@property char transportReady;
@property char didBulkSendFail;
@property char didBulkSendComplete;
@property (weak) id<HMDAccessoryDataStreamAdapterDelegate> delegate;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *fileType;
@property (readonly) NSDictionary *metadata;
@property (readonly) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)readData;
- (id)logIdentifier;
- (void)shutDown;
- (id)attributeDescriptions;
- (void)_setUpTransport;
- (void)_bulkSendDidComplete;
- (void)_bulkSendDidFail;
- (void)_callPendingOpenSessionCallbackWithResult:(id)a0 error:(id)a1;
- (void)_handleAccessoryDidClose;
- (char)_handleFrame:(id)a0;
- (void)_openSession;
- (void)accessory:(id)a0 didCloseDataStreamWithError:(id)a1;
- (void)accessory:(id)a0 didReceiveBulkSessionCandidate:(id)a1;
- (void)accessoryDidStartListening:(id)a0;
- (void)callPendingOpenSessionCallbackWithResult:(id)a0 error:(id)a1;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 fileType:(id)a2 metadata:(id)a3 reason:(id)a4;
- (void)setUpWithCallback:(id /* block */)a0;

@end
