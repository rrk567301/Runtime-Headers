@class VUIAppContext, VUINSNavigationController;

@interface VUIGDPRPresentationManager : NSObject

@property (nonatomic) BOOL hasShownWelcome;
@property (retain, nonatomic) VUINSNavigationController *navigationController;
@property (weak, nonatomic) VUIAppContext *appContext;

+ (id)_sharedInstance;
+ (void)acceptGDPRAndSyncWithServers:(id /* block */)a0;
+ (BOOL)carPlayShouldShowWelcomeScreen;
+ (void)checkGDPRConsentAndPerformRequests:(id /* block */)a0;
+ (BOOL)shouldShowWelcomeScreen;
+ (BOOL)showGDPRWelcomeScreen:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
