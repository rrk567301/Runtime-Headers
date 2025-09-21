@class NSError, NSString, AMSUIWebNavigationBarModel, AMSMetricsEvent, AMSUIWebAction, NSBundle, AMSUIWebClientContext, NSObject;
@protocol AMSUIWebErrorPageModelDelegate, OS_nw_path_monitor, AMSUIWebActionRunnable;

@interface AMSUIWebErrorPageModel : NSObject <AMSUIWebPageProvider> {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
}

@property (retain) NSBundle *bundle;
@property (retain) AMSUIWebClientContext *context;
@property BOOL hasNetworkConnection;
@property (retain) id<AMSUIWebActionRunnable> cachedAction;
@property (copy) id /* block */ cachedActionBlock;
@property (weak) id<AMSUIWebErrorPageModelDelegate> delegate;
@property (retain) id<AMSUIWebActionRunnable> action;
@property (copy) id /* block */ actionBlock;
@property (retain) NSString *actionButtonTitle;
@property (readonly) NSError *error;
@property (readonly) NSString *errorMessage;
@property BOOL errorMessageInternalOnly;
@property (retain) NSString *errorTitle;
@property (readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) NSString *backgroundColor;
@property (readonly) AMSMetricsEvent *impressionEvent;
@property (readonly) BOOL disableReappearPlaceholder;
@property (readonly) struct CGSize { double width; double height; } windowSize;
@property (readonly) AMSUIWebAction *swipeToDismissAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_messageFromError:(id)a0;

- (void).cxx_destruct;
- (BOOL)_canOpenSettings;
- (void)_startMonitoringNetwork;
- (void)_updateForNetworkConnectivityChange:(BOOL)a0;
- (id)createViewControllerForContainer:(id)a0;
- (id)initWithError:(id)a0 context:(id)a1 actionBlock:(id /* block */)a2;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)loadPage;

@end
