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

- (void)dumpStateTo:(id)a0;
- (id)initWithServer:(id)a0;
- (void)_didChangeListOfProviders;
- (void)startMonitoring;
- (void)_didChangeDefaultSaveLocationInUserDefaults;
- (void)_didChangeLocale:(id)a0;
- (void)_didRegisterApps:(id)a0;
- (void)stopMonitoring;
- (void)_updateDefaultProviderByAppBundleID;
- (id)listOfPlaceholderApps;
- (id)_appMetadataIfMonitoringIsNeeded:(id)a0;
- (void)_populateListOfMonitoredApps;
- (id)_updateDefaultProviderDomainID;
- (void).cxx_destruct;
- (void)_didUnregisterApps:(id)a0;
- (int)_registerForNotification:(id)a0 handler:(id /* block */)a1;

@end
