@class NSURL;

@interface PXCMMPublishActionPerformer : PXCMMActionPerformer

@property (retain, nonatomic) NSURL *publishedURL;

- (void).cxx_destruct;
- (BOOL)isCancellable;
- (void)cancelActionWithCompletionHandler:(id /* block */)a0;
- (id)createActionProgress;
- (void)_completePublishActionWithSuccess:(BOOL)a0 error:(id)a1 shareOrigin:(long long)a2 completionHandler:(id /* block */)a3;
- (id)performPublishActionWithWindow:(id)a0 session:(id)a1 shareOrigin:(long long)a2 completionHandler:(id /* block */)a3;

@end
