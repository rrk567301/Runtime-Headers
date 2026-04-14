@class NSDictionary, FPDServer, FPAppRegistry, NSObject;
@protocol OS_dispatch_queue;

@interface FPDAppMonitor : NSObject {
    NSDictionary *_defaultProviderByAppBundleID;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _didChangeProvidersToken;
    int _didChangeDefaultProviderToken;
}

@property (readonly, weak, nonatomic) FPDServer *server;
@property (getter=isMonitoring) BOOL monitoring;
@property (readonly, copy, nonatomic) FPAppRegistry *appRegistry;

- (int)_registerForNotification:(id)a0 handler:(id /* block */)a1;
- (void)stopMonitoring;
- (id)listOfPlaceholderApps;
- (void)startMonitoring;
- (id)_appMetadataIfMonitoringIsNeeded:(id)a0;
- (void)dumpStateTo:(id)a0;
- (void)_didChangeDefaultSaveLocationInUserDefaults;
- (void)_populateListOfMonitoredApps;
- (void)_didUnregisterApps:(id)a0;
- (void).cxx_destruct;
- (void)_didRegisterApps:(id)a0;
- (void)_didChangeLocale:(id)a0;
- (id)initWithServer:(id)a0;
- (void)_didChangeListOfProviders;
- (id)_updateDefaultProviderDomainID;
- (void)_updateDefaultProviderByAppBundleID;

@end
