@class HMDAppleAccountManager, NSString, NSMutableDictionary, HMDRemoteAccountManager, NSObject, NSMutableArray, HMFOperationBudget, NSMutableOrderedSet;
@protocol HMDFeaturesDataSource, OS_dispatch_queue, HMDIDSService;

@interface HMDIDSMessageTransport : HMDRemoteMessageTransport <HMDIDSServiceDelegate>

@property (readonly, nonatomic) HMDAppleAccountManager *appleAccountManager;
@property (readonly, nonatomic) HMDRemoteAccountManager *remoteAccountManager;
@property (readonly, nonatomic) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly) HMFOperationBudget *sendMessageBudget;
@property (readonly, nonatomic) NSMutableDictionary *pendingResponses;
@property (readonly, nonatomic) NSMutableDictionary *receivedResponses;
@property (readonly, nonatomic) NSMutableDictionary *requestedCapabilities;
@property (readonly, nonatomic) NSMutableDictionary *destinationAddress;
@property (readonly, nonatomic) NSMutableDictionary *pendingResponseTimers;
@property (readonly, nonatomic) NSMutableOrderedSet *messageDedupBuffer;
@property (readonly, nonatomic, getter=isLegacyTransport) BOOL legacyTransport;
@property (readonly) NSMutableArray *messageContexts;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<HMDIDSService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)restriction;
+ (id)stringFromHMDIDSResidentInfo:(long long)a0;
+ (struct _HMFRate { unsigned long long x0; double x1; })sendMessageRate;
+ (unsigned long long)sendMessageLimit;
+ (id)logCategory;
+ (id)queueOneIdentifierWithMessageName:(id)a0 target:(id)a1 collapseID:(id)a2 timeToLive:(double)a3 now:(id)a4;
+ (long long)priorityForMessage:(id)a0;

- (void)sendMessage:(id)a0 senderResidentInfo:(long long)a1 destinationResidentInfo:(long long)a2 completionHandler:(id /* block */)a3;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_startPendingResponseTimer:(id)a0 responseTimeout:(double)a1 identifier:(id)a2;
- (void)_restartPendingResponseTimerFor:(id)a0 withReducedFactor:(unsigned long long)a1;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 hasBeenDeliveredWithContext:(id)a3;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (BOOL)isValidMessage:(id)a0;
- (id)sendMessage:(id)a0 fromHandle:(id)a1 destination:(id)a2 priority:(long long)a3 timeout:(double)a4 options:(unsigned long long)a5 queueOneID:(id)a6 senderResidentInfo:(long long)a7 destinationResidentInfo:(long long)a8 error:(id *)a9;
- (int)transportType;
- (double)defaultTimeout;
- (BOOL)canSendMessage:(id)a0;
- (void)_removePendingResponseTransaction:(id)a0;
- (BOOL)isSecure;
- (id)initWithAccountRegistry:(id)a0 forServiceName:(id)a1;
- (void)_removePendingResponseTimerForTransaction:(id)a0;
- (id)name;
- (BOOL)_shouldProcessLegacyIDSMessageFromID:(id)a0 context:(id)a1 message:(id *)a2 service:(id)a3;
- (BOOL)_shouldAddLocalHandleToDevice:(id)a0;
- (id)sendMessage:(id)a0 fromHandle:(id)a1 destination:(id)a2 priority:(long long)a3 timeout:(double)a4 options:(unsigned long long)a5 queueOneID:(id)a6 error:(id *)a7;
- (unsigned long long)maximumNumberOfRetries;
- (BOOL)shouldAcceptLegacyIDSMessage:(id)a0;
- (void)legacyHandleIncomingRemoteMessage:(id)a0 sourceDevice:(id)a1 senderDeviceHandle:(id)a2 isSecure:(BOOL)a3 incomingMessage:(id)a4 fromID:(id)a5 context:(id)a6;
- (void)_pendingResponseTimeoutFor:(id)a0;
- (id)deviceForSenderContext:(id)a0;
- (long long)qualityOfService;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)start;
- (id)initWithAccountRegistry:(id)a0 service:(id)a1 serviceName:(id)a2 appleAccountManager:(id)a3 remoteAccountManager:(id)a4 featuresDataSource:(id)a5;

@end
