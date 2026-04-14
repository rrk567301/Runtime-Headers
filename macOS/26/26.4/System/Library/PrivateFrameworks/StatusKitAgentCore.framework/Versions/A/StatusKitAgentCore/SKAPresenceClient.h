@class SKAPresenceClientConnection, SKPresenceOptions, NSString, SKAPresenceProfile, NSObject;
@protocol SKACloudDatabaseManaging, SKAPresenceManaging, SKAPresenceClientDelegate, SKAPresenceMigrationManaging, SKAInvitationManaging, SKAFirewallManaging, OS_dispatch_queue, OS_os_transaction, SKAStatusSubscriptionManaging, SKAServerBagProviding;

@interface SKAPresenceClient : NSObject <SKAPresenceClientConnectionLifecycleDelegate, SKPresenceDaemonProtocol, SKAClientConnectionRepresentable>

@property (retain, nonatomic) SKAPresenceClientConnection *clientConnection;
@property (weak, nonatomic) id<SKAPresenceClientDelegate> delegate;
@property (retain, nonatomic) id<SKACloudDatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAStatusSubscriptionManaging> subscriptionManager;
@property (retain, nonatomic) id<SKAInvitationManaging> invitationManager;
@property (retain, nonatomic) id<SKAPresenceManaging> presenceManager;
@property (retain, nonatomic) id<SKAServerBagProviding> serverBag;
@property (retain, nonatomic) id<SKAPresenceMigrationManaging> presenceMigrationManager;
@property (retain, nonatomic) id<SKAFirewallManaging> firewallManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) SKPresenceOptions *options;
@property (copy, nonatomic) NSString *presenceIdentifier;
@property (retain, nonatomic) SKAPresenceProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (BOOL)isValidPayload:(id)a0 isPersistent:(BOOL)a1 profile:(id)a2 serverBag:(id)a3;
+ (id)oversizeLogger;

- (void)createChannelWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)fetchHandleInvitability:(id)a0 fromHandle:(id)a1 forPresenceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)dealloc;
- (BOOL)activeAssertion;
- (void)hasInitialCloudKitImportOccurredWithCompletion:(id /* block */)a0;
- (void)assertPresenceForIdentifier:(id)a0 onChannel:(id)a1 withPresencePayload:(id)a2 persistentPayload:(id)a3 serverRoutablePayload:(id)a4 assertionOptions:(id)a5 completion:(id /* block */)a6;
- (id)clientIdentifierPrefixForServiceIdentifier:(id)a0;
- (id)clientPrefixedPresenceIdentifierForPresenceIdentifier:(id)a0 serviceIdentifier:(id)a1;
- (void)donateTrustedHandles:(id)a0 presenceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)fetchPresenceCapability:(id /* block */)a0;
- (void)inviteHandles:(id)a0 fromSenderHandle:(id)a1 presenceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)invitedHandlesForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)isHandleInvited:(id)a0 fromSenderHandle:(id)a1 forPresenceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)persistentDevicesForPresenceIdentifier:(id)a0 onChannel:(id)a1 completion:(id /* block */)a2;
- (void)presentDevicesForPresenceIdentifier:(id)a0 onChannel:(id)a1 completion:(id /* block */)a2;
- (void)registerForDelegateCallbacksWithPresenceIdentifier:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)releasePresenceForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)releaseTransientSubscriptionAssertionForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeInvitedHandles:(id)a0 presenceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)retainTransientSubscriptionAssertionForPresenceIdentifier:(id)a0 onChannel:(id)a1 completion:(id /* block */)a2;
- (void)rollChannelForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)rollChannelFromChannel:(id)a0 toChannel:(id)a1 completion:(id /* block */)a2;
- (void)setFilterOverride:(int)a0 onChannel:(id)a1 presenceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)setPersistentPayload:(id)a0 onChannel:(id)a1 presenceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)validateToken:(id)a0 presenceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)validationTokenForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_assertPresenceForIdentifier:(id)a0 onChannel:(id)a1 withPresencePayload:(id)a2 persistentPayload:(id)a3 serverRoutablePayload:(id)a4 assertionOptions:(id)a5 completion:(id /* block */)a6;
- (void)_checkManateeCapabilityIgnoringTemporaryTrustLoss:(BOOL)a0 completion:(id /* block */)a1;
- (void)_completeRegistrationForPresenceIdentifier:(id)a0;
- (void)_releaseAllSubscriptionsAndAssertionsForDisconnection;
- (void)_releasePresenceForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_releaseTransientSubscriptionAssertionForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_retainTransientSubscriptionAssertionForPresenceIdentifier:(id)a0 onDatabaseChannel:(id)a1 completion:(id /* block */)a2;
- (void)_setFilterOverride:(int)a0 onChannel:(id)a1 completion:(id /* block */)a2;
- (id)_shorthashOfClientIdentifierPrefix:(id)a0;
- (void)accountIsPresenceCapableWithCompletion:(id /* block */)a0;
- (id)demuxPresentDevices:(id)a0 forServiceIdentifier:(id)a1 isPresent:(BOOL)a2;
- (void)handleReceivedInvitationForPresenceIdentifier:(id)a0;
- (void)handleReceivedUpdatedPresentDevices:(id)a0 persistentDevices:(id)a1 forPresenceIdentifier:(id)a2;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 delegate:(id)a2 subscriptionManager:(id)a3 presenceManager:(id)a4 presenceMigrationManager:(id)a5 invitationManager:(id)a6 databaseManager:(id)a7 serverBag:(id)a8 firewallManager:(id)a9 daemonProtocolDelegate:(id)a10;
- (void)initialCloudKitImportReceived;
- (void)presenceClientConnectionWasInterrupted:(id)a0;
- (void)presenceClientConnectionWasInvalidated:(id)a0;
- (BOOL)presenceIdentifierMatchesClient:(id)a0;
- (id)rawPresenceIdentifierForPrefixedPresenceIdentifier:(id)a0 serviceIdentifier:(id)a1;

@end
