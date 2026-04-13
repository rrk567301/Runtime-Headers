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
- (void)_sendSuccessToDelegate;
- (void)_sendErrorToDelegate:(id)a0;
- (void)registerDeviceTokenWithCompletionHandler:(id /* block */)a0;
- (void)enableAutoDownloadWithCompletionHandler:(id /* block */)a0;
- (void)disableAutoDownloadWithCompletionHandler:(id /* block */)a0;
- (void)enableAutoDownloadAtSignInWithCompletionHandler:(id /* block */)a0;
- (void)disableAutoDownloadAtSignOutWithCompletionHandler:(id /* block */)a0;
- (BOOL)isRegisteredForAccount:(id)a0 andMask:(long long)a1;
- (BOOL)registerPushToken;
- (void)getEnabledMedaTypesWithCompletionHandler:(id /* block */)a0;
- (BOOL)checkEnabledMediaTypes;
- (BOOL)startAtSignIn;
- (BOOL)stopAtSignOut;
- (BOOL)isRegisteredForAccount:(id)a0;
- (void)_sendChangedToDelegate;

@end
