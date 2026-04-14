@class NSMutableDictionary, APUnfairRecursiveLock;

@interface APControllerRequesterCoordinator : APXPCActionRequester <APPCControllerClientInterface>

@property (retain, nonatomic) NSMutableDictionary *requestDelegates;
@property (retain, nonatomic) APUnfairRecursiveLock *lock;

+ (id)machService;
+ (BOOL)canShareConnection;
+ (id)requestCoordinator;

- (void)connectionInterrupted;
- (id)exportedObject;
- (void)connectionInvalidated;
- (void)extendCollectionClassesForRemoteInterface:(id)a0;
- (void)requestPromotedContentOfTypes:(id)a0 forRequester:(id)a1 forContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)proxyURLForRequester:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)remoteObjectInterface;
- (void)sendAndRankContent:(id)a0 forContext:(id)a1 placement:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)_addDelegate:(id)a0 withID:(id)a1;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)proxyURLForRequester:(id)a0;
- (id)init;
- (void)preWarm:(id)a0 forRequester:(id)a1 completion:(id /* block */)a2;
- (void)extendCollectionClassesForExportedInterface:(id)a0;
- (void)finishedWithRequestsForID:(id)a0;
- (void)contentResponses:(id)a0 requester:(id)a1;

@end
