@class NSString;

@interface VUIUserEngagementSheetLauncher : NSObject <AMSUserNotificationAuthorizationDelegate>

@property (nonatomic) BOOL hasAppLostConnectivity;
@property (retain, nonatomic) NSString *lastTabIdentifier;
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
- (void)_handleNetworkReachabilityDidChangeNotification:(id)a0;
- (void)_handleTabBarChange:(id)a0;
- (BOOL)isAnotherSheetShowingToUser;
- (void)_showNotificationAuthorizationSheet;
- (void)_handleUserNotificationAction:(long long)a0;
- (void)_deleteKeysUsedForSheetPresentation;
- (void)handleAppEnteredBackgroundForUserEngagementSheet;
- (void)handleAMSEngagementPresentationSheet:(BOOL)a0;

@end
