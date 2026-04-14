@class NSUUID, HMFMessageDispatcher, NSString, HMXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface HMClientConnection : NSObject <HMFLogging, HMFMessageReceiver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMXPCClient *xpcClient;
@property (retain, nonatomic) NSUUID *uuid;
@property BOOL shouldWeRetrySendingSignOutMessageToHomeKitDaemon;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)sharedInstance;
+ (BOOL)areHomesConfigured;
+ (id)logCategory;
+ (id)siriCurrentHome;
+ (BOOL)areAnyAccessoriesConfigured;
+ (BOOL)areAnyAppleTVAccessoriesConfigured;
+ (BOOL)areAnyHomePodMiniConfigured;
+ (BOOL)areAnyHomePodsConfigured;
+ (BOOL)areAnyLargeHomePodConfigured;
+ (BOOL)areAnySpeakersConfigured;
+ (BOOL)areAnyTelevisionAccessoriesConfigured;
+ (id)siriHomeIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)_registerToDaemon;
- (void)_start;
- (void)_IDMSAccountUsernameModifiedWithCompletionHandler:(id /* block */)a0;
- (void)_primaryAccountDidChange:(id)a0 modified:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_primaryAccountWasDeletedWithCompletionHandler:(id /* block */)a0;
- (void)_reportResultsTohandler:(id /* block */)a0;
- (void)_retrySendingSignOutWithCompletion:(id /* block */)a0;
- (id)initWithNoValidation;
- (void)notifyAccountStatusUpdate:(unsigned long long)a0 accountIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)requestSiriSyncDataWithValidity:(id)a0 completion:(id /* block */)a1;
- (void)sendSiriCommand:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldRetrySendingSignOutMessageDueToError:(id)a0;

@end
