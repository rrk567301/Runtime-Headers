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

- (void)_populateListOfMonitoredApps;
- (void)stopMonitoring;
- (void)_didRegisterApps:(id)a0;
- (void)startMonitoring;
- (id)_updateDefaultProviderDomainID;
- (id)listOfPlaceholderApps;
- (int)_registerForNotification:(id)a0 handler:(id /* block */)a1;
- (id)_appMetadataIfMonitoringIsNeeded:(id)a0;
- (void)_didChangeListOfProviders;
- (id)initWithServer:(id)a0;
- (void).cxx_destruct;
- (void)_updateDefaultProviderByAppBundleID;
- (void)_didUnregisterApps:(id)a0;
- (void)_didChangeLocale:(id)a0;
- (void)_didChangeDefaultSaveLocationInUserDefaults;
- (void)dumpStateTo:(id)a0;

@end
