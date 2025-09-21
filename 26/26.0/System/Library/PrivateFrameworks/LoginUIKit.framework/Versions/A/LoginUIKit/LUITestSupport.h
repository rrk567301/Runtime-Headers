@class NSString, LUITestDisplayConfiguration, NSMenu, NSDictionary, NSUserDefaults;

@interface LUITestSupport : NSObject

@property (class, readonly) LUITestSupport *sharedTestSupport;

@property (readonly) BOOL isAppleInternal;
@property (readonly) BOOL canUpdateConfiguration;
@property BOOL configurationLoaded;
@property (retain) NSUserDefaults *defaults;
@property BOOL testing;
@property BOOL testingUsers;
@property (getter=isUnitTesting) BOOL unitTesting;
@property (retain) NSString *domain;
@property (readonly) NSMenu *displayConfigurationsMenu;
@property (retain) LUITestDisplayConfiguration *currentDisplayConfiguration;
@property BOOL useSFAuthorizationPluginView;
@property (readonly) NSDictionary *currentConfiguration;

- (id)init;
- (id)description;
- (id)testConfiguration;
- (void).cxx_destruct;
- (void)_clearTestConfigurationFromDomain;
- (void)_configurationChanged:(id)a0;
- (void)_displayConfigSelected:(id)a0;
- (void)_notifyDisplayConfigurationChanged;
- (void)_restoreCurrentDisplayConfiguration;
- (void)_saveCurrentDisplayConfiguration;
- (void)_stopWatchingForConfigurationChangedNotifications;
- (void)_watchForConfigurationChangedNotifications;
- (void)loadTestConfiguration;
- (void)postConfigurationChangedNotification;
- (void)saveTestConfiguration;

@end
