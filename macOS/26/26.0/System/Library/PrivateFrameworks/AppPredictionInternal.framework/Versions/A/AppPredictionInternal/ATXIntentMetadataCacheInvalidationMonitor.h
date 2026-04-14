@class NSUserDefaults, _ATXInternalUninstallNotification, ATXInternalAppRegistrationNotification;
@protocol ATXIntentMetadataCacheInvalidationDelegate;

@interface ATXIntentMetadataCacheInvalidationMonitor : NSObject {
    id<ATXIntentMetadataCacheInvalidationDelegate> _delegate;
    ATXInternalAppRegistrationNotification *_appRegistrationListener;
    _ATXInternalUninstallNotification *_appUninstallListener;
    NSUserDefaults *_userDefaults;
}

- (void)setDelegateAndStartMonitoring:(id)a0 userDefaults:(id)a1;
- (void)_notifyDelegateSystemDidUpdate;
- (void)setDelegateAndStartMonitoring:(id)a0;
- (void)_listenForAppRegistrationAndUninstall;
- (id)_getCurrentBuild;
- (void)_notifyDelegateApplicationsDidUpdate:(id)a0;
- (void)_notifyDelegateApplicationsDidUninstall:(id)a0;
- (void)_checkForOSUpdate;
- (void).cxx_destruct;

@end
