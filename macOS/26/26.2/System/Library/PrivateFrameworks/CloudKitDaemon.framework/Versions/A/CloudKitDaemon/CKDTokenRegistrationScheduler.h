@class CKDLogicalDeviceContext, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDTokenRegistrationScheduler : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *callbackBlocks;
@property (readonly, nonatomic) NSMutableDictionary *callbackTimers;
@property (readonly, weak, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property (readonly, nonatomic) NSMutableDictionary *unitTestingPushTokens;

- (void)forceTokenRefreshForAllClients;
- (void)tokenRefreshChanged;
- (void)registerTokenForAdopterContainer:(id)a0 completionBlock:(id /* block */)a1;
- (void)registerTokenRefresh;
- (void).cxx_destruct;
- (void)_removeApsToken:(id)a0 appContainerAccountTuple:(id)a1 completionBlock:(id /* block */)a2;
- (void)unregisterAllTokensForAccountID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handlePushToken:(id)a0 forContainer:(id)a1 completionBlock:(id /* block */)a2;
- (void)_refreshApsToken:(id)a0 container:(id)a1 completionBlock:(id /* block */)a2;
- (id)initWithDeviceContext:(id)a0;
- (void)unregisterTokenForAppContainerAccountTuple:(id)a0;
- (void)handlePublicPushTokenDidUpdate:(id)a0;
- (void)refreshAllClientsNow:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;

@end
