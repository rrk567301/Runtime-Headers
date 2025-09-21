@class HMDAppleAccountManager, NSString, NSMutableDictionary, HMDRemoteAccountManager, NSMutableArray, NSObject, HMFOperationBudget, NSMutableOrderedSet;
@protocol OS_dispatch_queue, HMDIDSService;

@interface HMDIDSMessageTransport : HMDRemoteMessageTransport <HMDIDSServiceDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDAppleAccountManager *appleAccountManager;
@property (readonly, nonatomic) HMDRemoteAccountManager *remoteAccountManager;
@property (readonly) NSMutableArray *messageContexts;
@property (readonly) HMFOperationBudget *sendMessageBudget;
@property (readonly, nonatomic) NSMutableDictionary *pendingResponses;
@property (readonly, nonatomic) NSMutableDictionary *receivedResponses;
@property (readonly, nonatomic) NSMutableDictionary *requestedCapabilities;
@property (readonly, nonatomic) NSMutableDictionary *destinationAddress;
@property (readonly, nonatomic) NSMutableDictionary *pendingResponseTimers;
@property (readonly, nonatomic) NSMutableOrderedSet *messageDedupBuffer;
@property (readonly, nonatomic, getter=isLegacyTransport) char legacyTransport;
@property (readonly, nonatomic) id<HMDIDSService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)restriction;
+ (struct _HMFRate { unsigned long long x0; double x1; })sendMessageRate;
+ (long long)priorityForMessage:(id)a0;
+ (id)queueOneIdentifierWithMessageName:(id)a0 target:(id)a1 collapseID:(id)a2 timeToLive:(double)a3 now:(id)a4;
+ (unsigned long long)sendMessageLimit;

- (void).cxx_destruct;
- (id)start;
- (long long)qualityOfService;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (int)transportType;
- (char)isSecure;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(char)a3 error:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)logIdentifier;
- (char)canSendMessage:(id)a0;
- (char)isValidMessage:(id)a0;
- (void)_pendingResponseTimeoutFor:(id)a0;
- (void)_removePendingResponseTimerForTransaction:(id)a0;
- (void)_removePendingResponseTransaction:(id)a0;
- (void)_restartPendingResponseTimerFor:(id)a0 withReducedFactor:(unsigned long long)a1;
- (char)_shouldAddLocalHandleToDevice:(id)a0;
- (char)_shouldProcessLegacyIDSMessageFromID:(id)a0 context:(id)a1 message:(id *)a2 service:(id)a3;
- (void)_startPendingResponseTimer:(id)a0 responseTimeout:(double)a1 identifier:(id)a2;
- (id)deviceForSenderContext:(id)a0;
- (id)initHMMMEnergyWithAccountRegistry:(id)a0;
- (id)initHMMMWithAccountRegistry:(id)a0;
- (id)initLegacyTransportWithAccountRegistry:(id)a0;
- (id)initLegacyTransportWithAccountRegistry:(id)a0 service:(id)a1 appleAccountManager:(id)a2 remoteAccountManager:(id)a3;
- (id)initWithAccountRegistry:(id)a0;
- (id)initWithAccountRegistry:(id)a0 service:(id)a1 appleAccountManager:(id)a2 remoteAccountManager:(id)a3;
- (void)legacyHandleIncomingRemoteMessage:(id)a0 sourceDevice:(id)a1 senderDeviceHandle:(id)a2 isSecure:(char)a3 incomingMessage:(id)a4 fromID:(id)a5 context:(id)a6;
- (id)sendMessage:(id)a0 fromHandle:(id)a1 destination:(id)a2 priority:(long long)a3 timeout:(double)a4 options:(unsigned long long)a5 queueOneID:(id)a6 error:(id *)a7;
- (char)shouldAcceptLegacyIDSMessage:(id)a0;

@end
