@class NSMutableDictionary, APUnfairRecursiveLock;

@interface APControllerRequesterCoordinator : APXPCActionRequester <APPCControllerClientInterface>

@property (retain, nonatomic) NSMutableDictionary *requestDelegates;
@property (retain, nonatomic) APUnfairRecursiveLock *lock;

+ (id)machService;
+ (BOOL)canShareConnection;
+ (id)requestCoordinator;

- (void)connectionInterrupted;
- (void)requestPromotedContentOfTypes:(id)a0 forRequester:(id)a1 forContext:(id)a2 completionHandler:(id /* block */)a3;
- (id)proxyURLForRequester:(id)a0;
- (id)remoteObjectInterface;
- (void)connectionInvalidated;
- (id)exportedObject;
- (void)extendCollectionClassesForExportedInterface:(id)a0;
- (void)extendCollectionClassesForRemoteInterface:(id)a0;
- (void)proxyURLForRequester:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)init;
- (void)_addDelegate:(id)a0 withID:(id)a1;
- (id)exportedInterface;
- (void)finishedWithRequestsForID:(id)a0;
- (void).cxx_destruct;
- (void)contentResponses:(id)a0 requester:(id)a1;
- (void)sendAndRankContent:(id)a0 forContext:(id)a1 placement:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)preWarm:(id)a0 forRequester:(id)a1 completion:(id /* block */)a2;

@end
