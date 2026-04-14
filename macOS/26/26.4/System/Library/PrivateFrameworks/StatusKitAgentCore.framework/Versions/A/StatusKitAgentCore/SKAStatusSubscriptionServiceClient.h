@class SKAStatusSubscriptionServiceClientConnection, NSString, NSObject;
@protocol SKAStatusSubscriptionServiceClientDelegate, OS_dispatch_queue, SKACloudDatabaseManaging, SKAStatusSubscriptionManaging, SKAServerBagProviding, SKALocalDatabaseManaging, SKAStatusEncryptionManaging;

@interface SKAStatusSubscriptionServiceClient : NSObject <SKAClientConnectionRepresentable, SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate, SKStatusSubscriptionDaemonProtocol>

@property (retain, nonatomic) SKAStatusSubscriptionServiceClientConnection *clientConnection;
@property (weak, nonatomic) id<SKAStatusSubscriptionServiceClientDelegate> delegate;
@property (retain, nonatomic) id<SKACloudDatabaseManaging> cloudDatabaseManager;
@property (retain, nonatomic) id<SKALocalDatabaseManaging> localDatabaseManager;
@property (retain, nonatomic) id<SKAStatusSubscriptionManaging> subscriptionManager;
@property (retain, nonatomic) id<SKAStatusEncryptionManaging> encryptionManager;
@property (retain, nonatomic) id<SKAServerBagProviding> serverBag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL trafficModeEnabled;
@property (readonly, copy, nonatomic) NSString *statusTypeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)_missingEntitlementErrorForStatusTypeIdentifier:(id)a0;
+ (id)_serverDisabledErrorForStatusTypeIdentifier:(id)a0;
+ (id)_subscriptionIdentifierNotFoundError:(id)a0;

- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)allStatusSubscriptionsWithPersistentSubscriptionAssertionForApplicationIdentifier:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)allSubscriptionMetadatasForStatusTypeIdentifier:(id)a0 includingPersonalSubscription:(BOOL)a1 completion:(id /* block */)a2;
- (void)allSubscriptionMetadatasWithActiveAssertionsForStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)allSubscriptionMetadatasWithActiveSubscriptionsForStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)deleteSubscriptionWithIdentifier:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)registerForDelegateCallbacksWithStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)subscriptionMetadataForHandle:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)subscriptionMetadataForPersonalSubscriptionWithStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)subscriptionValidationTokensForHandle:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)validatePersonalStatusSubscriptionMatchesSubscriptionValidationTokens:(id)a0 fromSender:(id)a1 statusTypeIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)_currentStatusForChannel:(id)a0;
- (id)_handlesAssociatedWithChannel:(id)a0;
- (id)_subscriptionMetadataForChannel:(id)a0;
- (BOOL)_validateChannelIsKnownForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 databaseContext:(id)a2;
- (void)accountIsStatusKitCapableWithCompletion:(id /* block */)a0;
- (BOOL)channelMatchesClientStatusTypeIdentifier:(id)a0;
- (void)handleReceivedInvitationForChannel:(id)a0;
- (void)handleReceivedStatusUpdate:(id)a0 onChannel:(id)a1;
- (void)handleRemoteDatabaseChangeForChannels:(id)a0;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 delegate:(id)a2 cloudDatabaseManager:(id)a3 localDatabaseManager:(id)a4 subscriptionManager:(id)a5 encryptionManager:(id)a6 inTrafficMode:(BOOL)a7 daemonProtocolDelegate:(id)a8 serverBag:(id)a9;
- (BOOL)isHandleInvited:(id)a0 toChannel:(id)a1;
- (void)subscriptionServiceClientConnectionWasInterrupted:(id)a0;
- (void)subscriptionServiceClientConnectionWasInvalidated:(id)a0;
- (id)validatePersonalChannel:(id)a0 matchesEncryptionValidationToken:(id)a1 fromSender:(id)a2;
- (id)validatePersonalChannel:(id)a0 matchesSubscriptionValidationToken:(id)a1 fromSender:(id)a2;

@end
