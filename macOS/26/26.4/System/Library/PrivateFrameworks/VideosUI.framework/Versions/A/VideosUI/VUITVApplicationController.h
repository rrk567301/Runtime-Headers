@class NSDate, VUIAppContext, NSString, NSObject, NSDictionary, NSViewController, VUINSNavigationController, NSWindow, VUITVApplicationControllerContext, _VUICoreApplication;
@protocol VUITVAppRootViewController, VUIAppStackProtocolObjC, OS_dispatch_source, VUITVApplicationControllerDelegate;

@interface VUITVApplicationController : NSObject <VUIAppContextDelegate> {
    _VUICoreApplication *_application;
    NSDictionary *_openURLReloadOptions;
    BOOL _suspended;
    BOOL _reloadInProgress;
    BOOL _reloadOnResume;
    double _reloadOnResumeMinInterval;
    NSDate *_reloadOnResumeBackgroundedDate;
    BOOL _doLaunchOpenURLHandling;
    NSDictionary *_launchOpenURLOptions;
    BOOL _popViewControllerOnBackground;
    NSViewController<VUITVAppRootViewController> *_appRootViewController;
    NSObject<OS_dispatch_source> *_lowMemoryWarningSource;
}

@property (readonly, nonatomic) NSWindow *window;
@property (readonly, nonatomic) VUITVApplicationControllerContext *context;
@property (readonly, weak, nonatomic) id<VUITVApplicationControllerDelegate> delegate;
@property (readonly, nonatomic) VUINSNavigationController *navigationController;
@property (readonly, nonatomic) VUIAppContext *appContext;
@property (readonly, nonatomic) id<VUIAppStackProtocolObjC> appStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_jsLaunchOptionsWithApplicationOptions:(id)a0;

- (void)stop;
- (id)rootViewController;
- (void)reload;
- (void)applicationWillSuspend:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (void)applicationDidResume:(id)a0;
- (void)appContext:(id)a0 didStartWithOptions:(id)a1;
- (void)appContext:(id)a0 didFailWithError:(id)a1;
- (void)appContext:(id)a0 didStopWithOptions:(id)a1;
- (void)appContext:(id)a0 evaluateAppJavaScriptInContext:(id)a1;
- (void)_applicationWillTerminateNotification:(id)a0;
- (id)_currentNavigationController;
- (BOOL)_hasReloadOnResumeMinIntervalPassed;
- (void)_launchApp;
- (void)_openURLControllerDidDisplay:(id)a0;
- (void)_openURLControllerHandler:(BOOL)a0;
- (void)_openURLOnAppLaunchControllerDidDisplay:(id)a0;
- (void)_reloadControllerDidDisplay:(id)a0;
- (id)_rootViewController;
- (BOOL)_shouldReloadOnResume;
- (void)appContext:(id)a0 needsReloadWithUrgency:(unsigned long long)a1 options:(id)a2;
- (void)appContext:(id)a0 scriptForURL:(id)a1 cachePolicy:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)appRootViewController;
- (id)appTraitCollection;
- (id)initWithContext:(id)a0 window:(id)a1 delegate:(id)a2;
- (id)initWithContext:(id)a0 window:(id)a1 delegate:(id)a2 appStack:(id)a3;
- (void)launchWithAppStack:(id)a0;
- (BOOL)openURL:(id)a0 options:(id)a1;
- (void)registerForApplicationNotifications;

@end
