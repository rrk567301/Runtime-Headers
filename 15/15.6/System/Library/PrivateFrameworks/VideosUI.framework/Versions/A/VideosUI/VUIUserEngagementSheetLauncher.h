@class NSString;

@interface VUIUserEngagementSheetLauncher : NSObject <AMSUserNotificationAuthorizationDelegate>

@property (nonatomic) char hasAppLostConnectivity;
@property (retain, nonatomic) NSString *lastTabIdentifier;
@property (nonatomic) unsigned long long firstPromptLaunchNumberAfterGDPR;
@property (nonatomic) unsigned long long lastPromptLaunchNumberAfterGDPR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)handleEngagementRequest:(id)a0 completion:(id /* block */)a1;
- (void)_deleteKeysUsedForSheetPresentation;
- (void)_handleNetworkReachabilityDidChangeNotification:(id)a0;
- (void)_handleTabBarChange:(id)a0;
- (void)_handleUserNotificationAction:(long long)a0;
- (void)_showNotificationAuthorizationSheet;
- (void)handleAMSEngagementPresentationSheet:(char)a0 isRepromptSupported:(char)a1;
- (char)isAnotherSheetShowingToUser;

@end
