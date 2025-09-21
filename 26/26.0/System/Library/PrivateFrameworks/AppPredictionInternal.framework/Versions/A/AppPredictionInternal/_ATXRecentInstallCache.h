@class NSMutableDictionary, _ATXInternalUninstallNotification, _ATXInternalInstallNotification;

@interface _ATXRecentInstallCache : NSObject {
    double _ttl;
    _ATXInternalInstallNotification *_installNotificationMonitor;
    _ATXInternalUninstallNotification *_uninstallNotificationMonitor;
    NSMutableDictionary *_recentInstallations;
}

- (id)initTrackingAppsMoreRecentThan:(double)a0;
- (id)allRecentlyInstalledApplications;
- (void)reset;
- (id)_allRecentlyInstalledApplicationsAfterExpirationDate:(id)a0;
- (id)init;
- (void)_notifiedOfUninstalls:(id)a0;
- (id)_getRecentInstallationsMap;
- (id)initTrackingAppsMoreRecentThan:(double)a0 installMonitor:(id)a1 uninstallMonitor:(id)a2;
- (void)_notifiedOfInstalls:(id)a0;
- (void).cxx_destruct;

@end
