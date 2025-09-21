@class NSDate, VUIAppContext, NSString, NSDictionary, NSViewController, VUINSNavigationController, NSWindow, VUITVApplicationControllerContext, _VUICoreApplication;
@protocol VUITVApplicationControllerDelegate, VUITVAppRootViewController;

@interface VUITVApplicationController : NSObject <VUIAppContextDelegate> {
    _VUICoreApplication *_application;
    NSDictionary *_openURLResumeOptions;
    NSDictionary *_openURLReloadOptions;
    char _suspended;
    char _reloadInProgress;
    char _reloadOnResume;
    double _reloadOnResumeMinInterval;
    NSDate *_reloadOnResumeBackgroundedDate;
    char _doLaunchOpenURLHandling;
    NSDictionary *_launchOpenURLOptions;
    char _popViewControllerOnBackground;
    NSViewController<VUITVAppRootViewController> *_appRootViewController;
}

@property (readonly, nonatomic) NSWindow *window;
@property (readonly, nonatomic) VUITVApplicationControllerContext *context;
@property (readonly, weak, nonatomic) id<VUITVApplicationControllerDelegate> delegate;
@property (readonly, nonatomic) VUINSNavigationController *navigationController;
@property (readonly, nonatomic) VUIAppContext *appContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_jsLaunchOptionsWithApplicationOptions:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)reload;
- (id)rootViewController;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (void)applicationWillSuspend:(id)a0;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (void)applicationDidResume:(id)a0;
- (void)appContext:(id)a0 didStartWithOptions:(id)a1;
- (void)appContext:(id)a0 didFailWithError:(id)a1;
- (void)appContext:(id)a0 didStopWithOptions:(id)a1;
- (void)appContext:(id)a0 evaluateAppJavaScriptInContext:(id)a1;
- (void)_applicationWillTerminateNotification:(id)a0;
- (id)_currentNavigationController;
- (char)_hasReloadOnResumeMinIntervalPassed;
- (void)_launchApp;
- (void)_openURLControllerDidDisplay:(id)a0;
- (void)_openURLControllerHandler:(char)a0;
- (void)_openURLOnAppLaunchControllerDidDisplay:(id)a0;
- (void)_reloadControllerDidDisplay:(id)a0;
- (id)_rootViewController;
- (char)_shouldReloadOnResume;
- (void)appContext:(id)a0 needsReloadWithUrgency:(unsigned long long)a1 options:(id)a2;
- (void)appContext:(id)a0 scriptForURL:(id)a1 cachePolicy:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)appRootViewController;
- (void)evaluateInJavaScriptContext:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 window:(id)a1 delegate:(id)a2;
- (char)openURL:(id)a0 options:(id)a1;
- (void)registerForApplicationNotifications;

@end
