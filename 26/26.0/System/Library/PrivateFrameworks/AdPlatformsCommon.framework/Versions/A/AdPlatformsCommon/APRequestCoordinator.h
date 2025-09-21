@class NSMutableDictionary, APUnfairLock;

@interface APRequestCoordinator : APXPCActionRequester <APPCControllerClientInterface, APRequesterCoordinatorProtocol>

@property (retain, nonatomic) NSMutableDictionary *managerToRetryBoxMap;
@property (retain, nonatomic) APUnfairLock *lock;

+ (id)machService;
+ (id)sharedCoordinator;
+ (BOOL)canShareConnection;

- (id)remoteObjectInterface;
- (id)exportedInterface;
- (id)exportedObject;
- (id)proxyURLForRequester:(id)a0;
- (void)connectionInvalidated;
- (void)proxyURLForRequester:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)init;
- (void)contentResponses:(id)a0 requester:(id)a1;
- (void)connectionInterrupted;
- (void)finishedWithRequestsForID:(id)a0;
- (void)extendCollectionClassesForExportedInterface:(id)a0;
- (void)preWarm:(id)a0 forRequester:(id)a1 completion:(id /* block */)a2;
- (void)extendCollectionClassesForRemoteInterface:(id)a0;
- (void).cxx_destruct;
- (void)_addBox:(id)a0;
- (void)_removeBox:(id)a0;
- (BOOL)attemptRetryMessageForBox:(id)a0;
- (void)beginSessionForID:(id)a0;
- (void)connectionSeveredForBox:(id)a0;
- (void)requestPromotedContentWithBox:(id)a0;
- (void)requestPromotedContentWithContents:(id)a0 forRequester:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestProxyWithBox:(id)a0;
- (void)requestRankingWithBox:(id)a0;
- (void)sendAndRankContent:(id)a0 forRequester:(id)a1 forContext:(id)a2 placement:(unsigned long long)a3 completionHandler:(id /* block */)a4;

@end
