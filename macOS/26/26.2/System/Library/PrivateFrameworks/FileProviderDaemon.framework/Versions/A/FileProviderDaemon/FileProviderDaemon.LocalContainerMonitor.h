@interface FileProviderDaemon.LocalContainerMonitor : NSObject <FPAppRegistryDelegate> {
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ appRegistry;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ monitoredAppsByID;
    void /* unknown type, empty encoding */ queue;
}

- (void).cxx_destruct;
- (id)init;
- (void)appRegistry:(id)a0 didRemoveAppsWithBundleIDs:(id)a1;
- (void)appRegistry:(id)a0 didUpdateApps:(id)a1;

@end
