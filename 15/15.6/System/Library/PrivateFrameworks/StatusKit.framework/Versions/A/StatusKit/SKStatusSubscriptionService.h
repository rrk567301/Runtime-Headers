@class SKStatusSubscriptionDaemonConnection, NSMapTable, NSString, SKStatusSubscription, NSObject;
@protocol OS_dispatch_queue;

@interface SKStatusSubscriptionService : NSObject <SKStatusSubscriptionDaemonDelegateProtocol, SKStatusSubscriptionConnectionDelegateProtocol>

@property (retain, nonatomic) SKStatusSubscriptionDaemonConnection *daemonConnection;
@property (retain, nonatomic) NSMapTable *delegates;
@property (nonatomic) char registeredForDelegateCallbacks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (readonly, nonatomic) NSString *statusTypeIdentifier;
@property (readonly, nonatomic) SKStatusSubscription *personalStatusSubscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)initWithStatusTypeIdentifier:(id)a0;
- (void)statusSubscriptionForHandle:(id)a0 completion:(id /* block */)a1;
- (id)statusSubscriptionForHandle:(id)a0;
- (void)subscriptionValidationTokenForHandle:(id)a0 completion:(id /* block */)a1;
- (void)subscriptionValidationTokensForHandle:(id)a0 completion:(id /* block */)a1;
- (void)validatePersonalStatusSubscriptionMatchesSubscriptionValidationToken:(id)a0 fromSender:(id)a1 completion:(id /* block */)a2;
- (void)validatePersonalStatusSubscriptionMatchesSubscriptionValidationTokens:(id)a0 fromSender:(id)a1 completion:(id /* block */)a2;
- (id)_allStatusSubscriptionsIncludingPersonalSubscription:(char)a0;
- (void)_delegatesPerformOnResponseQueueForGroup:(id)a0 block:(id /* block */)a1;
- (void)_registerForDelegateCallbacksIfNecessary;
- (void)_simulateCrashIfNecessaryForError:(id)a0;
- (id)allStatusSubscriptions;
- (id)allStatusSubscriptionsExceptPersonalSubscription;
- (id)allStatusSubscriptionsWithActiveAssertions;
- (id)allStatusSubscriptionsWithActiveSubscriptions;
- (void)allStatusSubscriptionsWithPersistentSubscriptionAssertionForApplicationIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)personalStatusSubscriptionWithCompletion:(id /* block */)a0;
- (void)subscriptionDaemonConnectionDidDisconnect:(id)a0;
- (void)subscriptionInvitationReceived:(id)a0 completion:(id /* block */)a1;
- (void)subscriptionReceivedStatusUpdate:(id)a0 completion:(id /* block */)a1;
- (void)subscriptionStateChangedForSubscriptions:(id)a0 completion:(id /* block */)a1;
- (id)subscriptionValidationTokenForHandle:(id)a0 error:(id *)a1;
- (id)subscriptionValidationTokensForHandle:(id)a0 error:(id *)a1;

@end
