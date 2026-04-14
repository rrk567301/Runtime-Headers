@class NSUUID, HMFMessageDispatcher, NSString, HMXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface HMClientConnection : NSObject <HMFMessageReceiver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMXPCClient *xpcClient;
@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)areHomesConfigured;
+ (id)siriCurrentHome;
+ (id)siriHomeIdentifier;
+ (BOOL)areAnyAccessoriesConfigured;
+ (BOOL)areAnySpeakersConfigured;
+ (BOOL)areAnyHomePodMiniConfigured;
+ (BOOL)areAnyLargeHomePodConfigured;
+ (BOOL)areAnyHomePodsConfigured;
+ (BOOL)areAnyTelevisionAccessoriesConfigured;
+ (BOOL)areAnyAppleTVAccessoriesConfigured;

- (id)init;
- (void).cxx_destruct;
- (void)_registerToDaemon;
- (void)_start;
- (id)initWithNoValidation;
- (void)sendSiriCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestSiriSyncDataWithValidity:(id)a0 completion:(id /* block */)a1;
- (void)_reportResultsTohandler:(id /* block */)a0;
- (void)notifyAccountStatusUpdate:(unsigned long long)a0 accountIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_invokeCompletionHandler:(id /* block */)a0 withError:(id)a1;
- (void)_primaryAccountDidChange:(id)a0 modified:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_IDMSAccountUsernameModifiedWithCompletionHandler:(id /* block */)a0;
- (void)_primaryAccountWasDeletedWithCompletionHandler:(id /* block */)a0;

@end
