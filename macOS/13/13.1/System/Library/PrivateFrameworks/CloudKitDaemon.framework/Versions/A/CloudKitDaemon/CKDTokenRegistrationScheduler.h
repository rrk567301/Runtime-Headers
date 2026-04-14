@class NSMutableDictionary, NSMutableSet, CKDLogicalDeviceContext, NSObject;
@protocol OS_dispatch_queue;

@interface CKDTokenRegistrationScheduler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *callbackBlocks;
@property (retain, nonatomic) NSMutableDictionary *callbackTimers;
@property (retain, nonatomic) NSMutableSet *operations;
@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property (retain, nonatomic) NSMutableDictionary *unitTestingPushTokens;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDeviceContext:(id)a0;
- (void)handlePublicPushTokenDidUpdate:(id)a0;
- (void)registerTokenRefreshActivity;
- (void)tokenRefreshChanged;
- (void)_refreshApsToken:(id)a0 container:(id)a1 completionBlock:(id /* block */)a2;
- (void)_removeApsToken:(id)a0 appContainerAccountTuple:(id)a1 completionBlock:(id /* block */)a2;
- (void)refreshAllClientsNow:(BOOL)a0;
- (void)_handlePushToken:(id)a0 forContainer:(id)a1 completionBlock:(id /* block */)a2;
- (void)unregisterTokenForAppContainerAccountTuple:(id)a0;
- (void)unregisterAllTokensForAccountID:(id)a0 completionHandler:(id /* block */)a1;
- (void)forceTokenRefreshForAllClients;
- (void)registerTokenForAdopterContainer:(id)a0 completionBlock:(id /* block */)a1;

@end
