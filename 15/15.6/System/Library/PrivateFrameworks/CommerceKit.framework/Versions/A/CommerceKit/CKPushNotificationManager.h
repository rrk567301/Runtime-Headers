@class CKStoreClient;

@interface CKPushNotificationManager : NSObject

@property (readonly, nonatomic) CKStoreClient *storeClient;
@property (weak) id delegate;

+ (id)sharedManager;
+ (id)pushNotificationManagerForStoreClient:(id)a0;

- (void).cxx_destruct;
- (char)start;
- (char)stop;
- (id)initWithStoreClient:(id)a0;
- (char)isRegisteredForAccount:(id)a0 andMask:(long long)a1;
- (void)_sendChangedToDelegate;
- (void)_sendErrorToDelegate:(id)a0;
- (void)_sendSuccessToDelegate;
- (char)checkEnabledMediaTypes;
- (void)disableAutoDownloadAtSignOutWithCompletionHandler:(id /* block */)a0;
- (void)disableAutoDownloadWithCompletionHandler:(id /* block */)a0;
- (void)enableAutoDownloadAtSignInWithCompletionHandler:(id /* block */)a0;
- (void)enableAutoDownloadWithCompletionHandler:(id /* block */)a0;
- (void)getEnabledMedaTypesWithCompletionHandler:(id /* block */)a0;
- (char)isRegisteredForAccount:(id)a0;
- (void)registerDeviceTokenWithCompletionHandler:(id /* block */)a0;
- (char)registerPushToken;
- (char)startAtSignIn;
- (char)stopAtSignOut;

@end
