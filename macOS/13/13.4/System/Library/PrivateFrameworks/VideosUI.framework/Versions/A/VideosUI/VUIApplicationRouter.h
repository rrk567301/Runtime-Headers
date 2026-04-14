@interface VUIApplicationRouter : NSObject

+ (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)a0;
+ (void)dismissPresentedViewController;
+ (BOOL)_handleDocumentDataSource:(id)a0 targetResponder:(id)a1 appContext:(id)a2 documentOptions:(id)a3 completion:(id /* block */)a4;
+ (BOOL)_handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 eventDataSource:(id)a3 documentOptions:(id)a4 extraInfo:(id *)a5;
+ (void)_performForType:(long long)a0 targetResponder:(id)a1 appContext:(id)a2 eventDataSource:(id)a3 documentOptions:(id)a4;
+ (id)_viewControllerWithIdentifier:(id)a0;
+ (id)currentNavigationController;
+ (void)dismissOrPopLastViewControllerWithCompletion:(id /* block */)a0;
+ (void)dismissOrPopViewControllerWithId:(id)a0 completion:(id /* block */)a1;
+ (id)eventDataSourceForEvent:(id)a0 routerDataSource:(id)a1;
+ (BOOL)handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 routerDataSource:(id)a3 supplementaryData:(id)a4 extraInfo:(id *)a5;
+ (void)processAndPresentAMSWebURL:(id)a0;
+ (id)topMostVisibleViewController;
+ (id)topPresentedViewController;

@end
