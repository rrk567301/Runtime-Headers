@class NSUserDefaults, _ATXInternalUninstallNotification, ATXInternalAppRegistrationNotification;
@protocol ATXIntentMetadataCacheInvalidationDelegate;

@interface ATXIntentMetadataCacheInvalidationMonitor : NSObject {
    id<ATXIntentMetadataCacheInvalidationDelegate> _delegate;
    ATXInternalAppRegistrationNotification *_appRegistrationListener;
    _ATXInternalUninstallNotification *_appUninstallListener;
    NSUserDefaults *_userDefaults;
}

- (void)_notifyDelegateApplicationsDidUpdate:(id)a0;
- (void)setDelegateAndStartMonitoring:(id)a0;
- (void)_listenForAppRegistrationAndUninstall;
- (void)_notifyDelegateSystemDidUpdate;
- (void).cxx_destruct;
- (void)setDelegateAndStartMonitoring:(id)a0 userDefaults:(id)a1;
- (void)_notifyDelegateApplicationsDidUninstall:(id)a0;
- (void)_checkForOSUpdate;
- (id)_getCurrentBuild;

@end
