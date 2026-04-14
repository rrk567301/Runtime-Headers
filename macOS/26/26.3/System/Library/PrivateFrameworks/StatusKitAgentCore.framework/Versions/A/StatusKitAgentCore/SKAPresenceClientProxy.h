@class NSError, NSString, NSArray, SKHandleInvitability, SKPresenceAssertionOptions, SKHandle, SKAPresenceClient, SKPresencePayload, SKPresenceOptions;

@interface SKAPresenceClientProxy : NSObject <SKPresenceDaemonProtocol> {
    void /* unknown type, empty encoding */ clientID;
    void /* unknown type, empty encoding */ queue;
}

@property (nonatomic, retain) SKAPresenceClient *underlyingClient;
@property (nonatomic, readonly) NSString *description;

- (void)fetchHandleInvitability:(SKHandle *)a0 fromHandle:(SKHandle *)a1 forPresenceIdentifier:(NSString *)a2 completion:(void (^)(SKHandleInvitability *, NSError *))a3;
- (id)init;
- (void).cxx_destruct;
- (void)hasInitialCloudKitImportOccurredWithCompletion:(void (^)(NSError *, BOOL))a0;
- (void)assertPresenceForIdentifier:(NSString *)a0 withPresencePayload:(SKPresencePayload *)a1 assertionOptions:(SKPresenceAssertionOptions *)a2 completion:(void (^)(NSError *))a3;
- (void)fetchPresenceCapability:(void (^)(BOOL))a0;
- (void)inviteHandles:(NSArray *)a0 fromSenderHandle:(SKHandle *)a1 presenceIdentifier:(NSString *)a2 completion:(void (^)(NSError *))a3;
- (void)invitedHandlesForPresenceIdentifier:(NSString *)a0 completion:(void (^)(NSArray *, NSError *))a1;
- (void)isHandleInvited:(SKHandle *)a0 fromSenderHandle:(SKHandle *)a1 forPresenceIdentifier:(NSString *)a2 completion:(void (^)(BOOL, NSError *))a3;
- (void)presentDevicesForPresenceIdentifier:(NSString *)a0 completion:(void (^)(NSArray *, NSError *))a1;
- (void)registerForDelegateCallbacksWithPresenceIdentifier:(NSString *)a0 options:(SKPresenceOptions *)a1 completion:(void (^)(NSError *))a2;
- (void)releasePresenceForIdentifier:(NSString *)a0 completion:(void (^)(NSError *))a1;
- (void)releaseTransientSubscriptionAssertionForPresenceIdentifier:(NSString *)a0 completion:(void (^)(NSError *))a1;
- (void)removeInvitedHandles:(NSArray *)a0 presenceIdentifier:(NSString *)a1 completion:(void (^)(NSError *))a2;
- (void)retainTransientSubscriptionAssertionForPresenceIdentifier:(NSString *)a0 completion:(void (^)(NSError *))a1;
- (void)rollChannelForPresenceIdentifier:(NSString *)a0 completion:(void (^)(NSError *))a1;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 delegate:(id)a2 subscriptionManager:(id)a3 presenceManager:(id)a4 invitationManager:(id)a5 databaseManager:(id)a6;

@end
