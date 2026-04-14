@class HMFMessageDispatcher, HMDAccessory, NSString, HMDAccessoryDiagnosticsSessionInternal, NSObject, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAccessoryDiagnosticsManagerInternal : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly, weak) HMDAccessory *accessory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *msgDispatcher;
@property (readonly, copy) NSString *clientIdentifier;
@property (retain) HMDAccessoryDiagnosticsSessionInternal *currentDiagnosticsSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)shutDown;
- (void)_registerForMessages;
- (void)start;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (void)_handleDiagnosticsTransferRequest:(id)a0;
- (void)handleDiagnosticsTransferWithOptions:(id)a0 message:(id)a1;
- (void)notifyClientsOfSupportedDiagnostics:(id)a0;

@end
