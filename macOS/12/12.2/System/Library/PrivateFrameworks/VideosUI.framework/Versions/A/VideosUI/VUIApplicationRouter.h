@interface VUIApplicationRouter : NSObject

+ (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)a0;
+ (void)dismissPresentedViewController;
+ (void)_performForType:(long long)a0 targetResponder:(id)a1 appContext:(id)a2 eventDataSource:(id)a3 documentOptions:(id)a4;
+ (BOOL)_handleDocumentDataSource:(id)a0 targetResponder:(id)a1 appContext:(id)a2 documentOptions:(id)a3 completion:(id /* block */)a4;
+ (id)topPresentedViewController;
+ (id)_viewControllerWithIdentifier:(id)a0;
+ (id)currentNavigationController;
+ (id)eventDataSourceForEvent:(id)a0 routerDataSource:(id)a1;
+ (BOOL)_handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 eventDataSource:(id)a3 documentOptions:(id)a4 extraInfo:(id *)a5;
+ (void)dismissOrPopViewControllerWithId:(id)a0 completion:(id /* block */)a1;
+ (void)dismissOrPopLastViewControllerWithCompletion:(id /* block */)a0;
+ (id)topMostVisibleViewController;
+ (BOOL)handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 routerDataSource:(id)a3 supplementaryData:(id)a4 extraInfo:(id *)a5;

@end
