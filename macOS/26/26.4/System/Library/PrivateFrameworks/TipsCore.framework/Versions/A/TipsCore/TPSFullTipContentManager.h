@class NSObject, TPSServiceConnection;
@protocol OS_dispatch_queue;

@interface TPSFullTipContentManager : NSObject

@property (retain, nonatomic) TPSServiceConnection *serviceProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)a0;
- (id /* block */)_objectsCompletionOnClientQueue:(id /* block */)a0;
- (void)_performWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)contentForVariant:(id)a0 completionHandler:(id /* block */)a1;
- (void)contentWithCollectionIds:(id)a0 documentIds:(id)a1 bundleId:(id)a2 includeBookends:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)contentWithCompletionHandler:(id /* block */)a0;
- (void)fetchAssetsWithAssetsConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)markTipViewed:(id)a0;
- (void)removeNotificationForIdentifier:(id)a0;
- (void)supportFlowContentWithCompletionHandler:(id /* block */)a0;
- (void)tipsAppActive;
- (void)userGuideMapWithCompletionHandler:(id /* block */)a0;

@end
