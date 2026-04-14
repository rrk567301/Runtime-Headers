@interface VUIApplicationRouter : NSObject

+ (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)a0;
+ (void)dismissPresentedViewController;
+ (id)eventDataSourceForEvent:(id)a0 routerDataSource:(id)a1;
+ (void)processAndPresentAMSWebURL:(id)a0;
+ (BOOL)_handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 eventDataSource:(id)a3 documentOptions:(id)a4 extraInfo:(id *)a5;
+ (void)_performForType:(long long)a0 targetResponder:(id)a1 appContext:(id)a2 eventDataSource:(id)a3 documentOptions:(id)a4;
+ (BOOL)_handleDocumentDataSource:(id)a0 targetResponder:(id)a1 appContext:(id)a2 documentOptions:(id)a3 completion:(id /* block */)a4;
+ (void)dismissOrPopViewControllerWithId:(id)a0 completion:(id /* block */)a1;
+ (void)dismissOrPopLastViewControllerWithCompletion:(id /* block */)a0;
+ (id)currentNavigationController;
+ (id)topPresentedViewController;
+ (id)topMostVisibleViewController;
+ (id)_viewControllerWithIdentifier:(id)a0;
+ (BOOL)handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 routerDataSource:(id)a3 supplementaryData:(id)a4 extraInfo:(id *)a5;

@end
