@class VUIAppContext, VUINSNavigationController;

@interface VUIGDPRPresentationManager : NSObject

@property (retain, nonatomic) VUINSNavigationController *navigationController;
@property (weak, nonatomic) VUIAppContext *appContext;

+ (id)_sharedInstance;
+ (void)acceptGDPRAndSyncWithServers:(id /* block */)a0;
+ (BOOL)shouldShowWelcomeScreen;
+ (BOOL)showGDPRWelcomeScreen:(id)a0;

- (void).cxx_destruct;
- (void)accept:(id)a0;
- (id)_currentWindowRootViewController;
- (void)_dismissAllModalsIfPresent:(id)a0;
- (void)_handleContinueButton;
- (void)_handleOfflineContinueButton;

@end
