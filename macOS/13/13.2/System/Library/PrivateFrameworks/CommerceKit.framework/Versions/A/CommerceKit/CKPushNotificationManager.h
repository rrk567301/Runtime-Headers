@class CKStoreClient;

@interface CKPushNotificationManager : NSObject

@property (readonly, nonatomic) CKStoreClient *storeClient;
@property (weak) id delegate;

+ (id)sharedManager;
+ (id)pushNotificationManagerForStoreClient:(id)a0;

- (void).cxx_destruct;
- (BOOL)start;
- (BOOL)stop;
- (id)initWithStoreClient:(id)a0;
- (void)registerDeviceTokenWithCompletionHandler:(id /* block */)a0;
- (BOOL)registerPushToken;
- (void)getEnabledMedaTypesWithCompletionHandler:(id /* block */)a0;
- (BOOL)checkEnabledMediaTypes;
- (void)enableAutoDownloadWithCompletionHandler:(id /* block */)a0;
- (void)disableAutoDownloadWithCompletionHandler:(id /* block */)a0;
- (void)enableAutoDownloadAtSignInWithCompletionHandler:(id /* block */)a0;
- (BOOL)startAtSignIn;
- (void)disableAutoDownloadAtSignOutWithCompletionHandler:(id /* block */)a0;
- (BOOL)stopAtSignOut;
- (BOOL)isRegisteredForAccount:(id)a0;
- (BOOL)isRegisteredForAccount:(id)a0 andMask:(long long)a1;
- (void)_sendErrorToDelegate:(id)a0;
- (void)_sendSuccessToDelegate;
- (void)_sendChangedToDelegate;

@end
