@class SKSubscriptionValidationTokens, NSString, SKAStatusSubscriptionServiceClient, NSArray, NSError, SKHandle, SKStatusSubscriptionMetadata;

@interface SKAStatusSubscriptionServiceClientProxy : NSObject <SKStatusSubscriptionDaemonProtocol> {
    void /* unknown type, empty encoding */ queue;
}

@property (nonatomic, retain) SKAStatusSubscriptionServiceClient *underlyingClient;

- (id)init;
- (void).cxx_destruct;
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(NSString *)a0 statusTypeIdentifier:(NSString *)a1 applicationIdentifier:(NSString *)a2 completion:(void (^)(NSError *))a3;
- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(NSString *)a0 statusTypeIdentifier:(NSString *)a1 applicationIdentifier:(NSString *)a2 completion:(void (^)(NSError *))a3;
- (void)allStatusSubscriptionsWithPersistentSubscriptionAssertionForApplicationIdentifier:(NSString *)a0 statusTypeIdentifier:(NSString *)a1 completion:(void (^)(NSArray *, NSError *))a2;
- (void)allSubscriptionMetadatasForStatusTypeIdentifier:(NSString *)a0 includingPersonalSubscription:(BOOL)a1 completion:(void (^)(NSArray *, NSError *))a2;
- (void)allSubscriptionMetadatasWithActiveAssertionsForStatusTypeIdentifier:(NSString *)a0 completion:(void (^)(NSArray *, NSError *))a1;
- (void)allSubscriptionMetadatasWithActiveSubscriptionsForStatusTypeIdentifier:(NSString *)a0 completion:(void (^)(NSArray *, NSError *))a1;
- (void)deleteSubscriptionWithIdentifier:(NSString *)a0 statusTypeIdentifier:(NSString *)a1 completion:(void (^)(NSError *))a2;
- (void)registerForDelegateCallbacksWithStatusTypeIdentifier:(NSString *)a0 completion:(void (^)(NSError *))a1;
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(NSString *)a0 statusTypeIdentifier:(NSString *)a1 completion:(void (^)(NSError *))a2;
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(NSString *)a0 statusTypeIdentifier:(NSString *)a1 completion:(void (^)(NSError *))a2;
- (void)subscriptionMetadataForHandle:(SKHandle *)a0 statusTypeIdentifier:(NSString *)a1 completion:(void (^)(SKStatusSubscriptionMetadata *, NSError *))a2;
- (void)subscriptionMetadataForPersonalSubscriptionWithStatusTypeIdentifier:(NSString *)a0 completion:(void (^)(SKStatusSubscriptionMetadata *, NSError *))a1;
- (void)subscriptionValidationTokensForHandle:(SKHandle *)a0 statusTypeIdentifier:(NSString *)a1 completion:(void (^)(SKSubscriptionValidationTokens *, NSError *))a2;
- (void)validatePersonalStatusSubscriptionMatchesSubscriptionValidationTokens:(SKSubscriptionValidationTokens *)a0 fromSender:(SKHandle *)a1 statusTypeIdentifier:(NSString *)a2 completion:(void (^)(long long, NSError *))a3;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 delegate:(id)a2 databaseManager:(id)a3 subscriptionManager:(id)a4 encryptionManager:(id)a5 inTrafficMode:(BOOL)a6;

@end
