@class CKStoreClient;

@interface CKPushNotificationManager : NSObject

@property (readonly, nonatomic) CKStoreClient *storeClient;
@property (weak) id delegate;

+ (id)sharedManager;
+ (id)pushNotificationManagerForStoreClient:(id)a0;

- (id)initWithStoreClient:(id)a0;
- (BOOL)stop;
- (void).cxx_destruct;
- (BOOL)start;
- (BOOL)isRegisteredForAccount:(id)a0 andMask:(long long)a1;
- (void)_sendChangedToDelegate;
- (void)_sendErrorToDelegate:(id)a0;
- (void)_sendSuccessToDelegate;
- (BOOL)checkEnabledMediaTypes;
- (void)disableAutoDownloadAtSignOutWithCompletionHandler:(id /* block */)a0;
- (void)disableAutoDownloadWithCompletionHandler:(id /* block */)a0;
- (void)enableAutoDownloadAtSignInWithCompletionHandler:(id /* block */)a0;
- (void)enableAutoDownloadWithCompletionHandler:(id /* block */)a0;
- (void)getEnabledMedaTypesWithCompletionHandler:(id /* block */)a0;
- (BOOL)isRegisteredForAccount:(id)a0;
- (void)registerDeviceTokenWithCompletionHandler:(id /* block */)a0;
- (BOOL)registerPushToken;
- (BOOL)startAtSignIn;
- (BOOL)stopAtSignOut;

@end
