@class ACDAuthenticationPluginLoader, NSLock, NSMutableDictionary, NSMutableSet, NSObject, ACRateLimiter, ACDQueueDictionary;
@protocol OS_dispatch_queue;

@interface ACDAuthenticationPluginManager : NSObject {
    ACDAuthenticationPluginLoader *_authPluginLoader;
    ACDQueueDictionary *_verificationHandlerQueues;
    ACDQueueDictionary *_renewalHandlerQueues;
    ACDQueueDictionary *_discoveryHandlerQueues;
    NSMutableSet *_keysForRateExceededBugSent;
    NSLock *_verificationHandlersLock;
    NSLock *_renewalHandlersLock;
    NSLock *_discoveryHandlersLock;
    NSMutableDictionary *_authenticationPluginsByType;
    NSObject<OS_dispatch_queue> *_authenticationPluginQueue;
}

@property (retain) ACRateLimiter *renewalRateLimiter;

+ (id)_sanitizeError:(id)a0;

- (void)credentialForAccount:(id)a0 client:(id)a1 store:(id)a2 handler:(id /* block */)a3;
- (BOOL)isPushSupportedForAccount:(id)a0;
- (id)_authenticationTypeForAccount:(id)a0;
- (void)verifyCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 handler:(id /* block */)a3;
- (id)_descriptionForRenewalResult:(long long)a0;
- (void)_handleVerificationCompletionForAccount:(id)a0 verifiedAccount:(id)a1 error:(id)a2 store:(id)a3 shouldSave:(BOOL)a4;
- (void)discoverPropertiesForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)_renewalRequestIsWithinLimitsForAccount:(id)a0 accountStore:(id)a1;
- (unsigned long long)renewalCredentialTimeout;
- (void)_handleDiscoveryCompletionResult:(id)a0 forAccount:(id)a1 discoveryID:(id)a2 accountStore:(id)a3 shouldSave:(BOOL)a4 error:(id)a5;
- (id)_authCapableParentAccountForAccount:(id)a0;
- (void)_handleRenewalCompletionResult:(long long)a0 forAccount:(id)a1 renewalID:(id)a2 accountStore:(id)a3 error:(id)a4;
- (void).cxx_destruct;
- (id)initWithAuthenticationPluginLoader:(id)a0;
- (id)_unsanitizeOptionsDictionary:(id)a0;
- (void)renewCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
