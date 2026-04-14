@class NSError, NSString, SKPresenceServerRoutablePayload, NSArray, SKPresenceChannel, SKHandleInvitability, SKHandle, SKAPresenceClient, SKPresencePayload, SKPresenceAssertionOptions, SKPresenceValidationToken;

@interface SKAPresenceClientProxy : NSObject <SKPresenceDaemonProtocol> {
    void /* unknown type, empty encoding */ logClient;
    void /* unknown type, empty encoding */ queue;
}

@property (nonatomic, retain) SKAPresenceClient *underlyingClient;
@property (nonatomic, readonly) NSString *description;

- (void)createChannelWithCompletion:(void (^)(SKPresenceChannel *, NSError *))a0;
- (void).cxx_destruct;
- (void)fetchHandleInvitability:(SKHandle *)a0 fromHandle:(SKHandle *)a1 forPresenceIdentifier:(NSString *)a2 completion:(void (^)(SKHandleInvitability *, NSError *))a3;
- (id)init;
- (void)hasInitialCloudKitImportOccurredWithCompletion:(void (^)(NSError *, BOOL))a0;
- (void)assertPresenceForIdentifier:(NSString *)a0 onChannel:(SKPresenceChannel *)a1 withPresencePayload:(SKPresencePayload *)a2 persistentPayload:(SKPresencePayload *)a3 serverRoutablePayload:(SKPresenceServerRoutablePayload *)a4 assertionOptions:(SKPresenceAssertionOptions *)a5 completion:(void (^)(NSError *))a6;
- (void)donateTrustedHandles:(NSArray *)a0 presenceIdentifier:(NSString *)a1 completion:(void (^)(NSError *))a2;
- (void)fetchPresenceCapability:(void (^)(BOOL))a0;
- (void)inviteHandles:(NSArray *)a0 fromSenderHandle:(SKHandle *)a1 presenceIdentifier:(NSString *)a2 completion:(void (^)(NSError *))a3;
- (void)invitedHandlesForPresenceIdentifier:(NSString *)a0 completion:(void (^)(NSArray *, NSError *))a1;
- (void)isHandleInvited:(SKHandle *)a0 fromSenderHandle:(SKHandle *)a1 forPresenceIdentifier:(NSString *)a2 completion:(void (^)(BOOL, NSError *))a3;
- (void)persistentDevicesForPresenceIdentifier:(NSString *)a0 onChannel:(SKPresenceChannel *)a1 completion:(void (^)(NSArray *, NSError *))a2;
- (void)presentDevicesForPresenceIdentifier:(NSString *)a0 onChannel:(SKPresenceChannel *)a1 completion:(void (^)(NSArray *, NSError *))a2;
- (void)registerForDelegateCallbacksWithPresenceIdentifier:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)releasePresenceForIdentifier:(NSString *)a0 completion:(void (^)(NSError *))a1;
- (void)releaseTransientSubscriptionAssertionForPresenceIdentifier:(NSString *)a0 completion:(void (^)(NSError *))a1;
- (void)removeInvitedHandles:(NSArray *)a0 presenceIdentifier:(NSString *)a1 completion:(void (^)(NSError *))a2;
- (void)retainTransientSubscriptionAssertionForPresenceIdentifier:(NSString *)a0 onChannel:(SKPresenceChannel *)a1 completion:(void (^)(NSError *))a2;
- (void)rollChannelForPresenceIdentifier:(NSString *)a0 completion:(void (^)(NSError *))a1;
- (void)rollChannelFromChannel:(SKPresenceChannel *)a0 toChannel:(SKPresenceChannel *)a1 completion:(void (^)(NSError *))a2;
- (void)setFilterOverride:(int)a0 onChannel:(SKPresenceChannel *)a1 presenceIdentifier:(NSString *)a2 completion:(void (^)(NSError *))a3;
- (void)setPersistentPayload:(SKPresencePayload *)a0 onChannel:(SKPresenceChannel *)a1 presenceIdentifier:(NSString *)a2 completion:(void (^)(NSError *))a3;
- (void)validateToken:(SKPresenceValidationToken *)a0 presenceIdentifier:(NSString *)a1 completion:(void (^)(long long, NSError *))a2;
- (void)validationTokenForPresenceIdentifier:(NSString *)a0 completion:(void (^)(SKPresenceValidationToken *, NSError *))a1;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 delegate:(id)a2 subscriptionManager:(id)a3 presenceManager:(id)a4 presenceMigrationManager:(id)a5 invitationManager:(id)a6 databaseManager:(id)a7 serverBag:(id)a8 firewallManager:(id)a9;

@end
