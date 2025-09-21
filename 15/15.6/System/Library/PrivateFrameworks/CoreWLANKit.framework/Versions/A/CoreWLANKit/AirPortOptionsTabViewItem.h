@class CWWiFiUIProxyClient, NSString, CWWiFiClient, AirPortOptionsTabView, CWInterface;

@interface AirPortOptionsTabViewItem : NSTabViewItem <CWWiFiUIProxyClientDelegate> {
    AirPortOptionsTabView *_AirPortOptionsTabView;
    id _owner;
}

@property (copy) NSString *interfaceName;
@property (readonly) CWInterface *interface;
@property (readonly) CWWiFiClient *wifiClient;
@property (readonly) CWWiFiUIProxyClient *wifiUIClient;
@property (readonly) char isWiFiNetworkSyncEnabled;
@property (readonly) unsigned long long modifierFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setEnabled:(char)a0;
- (id)interface;
- (void)clientConnectionInterrupted;
- (char)hasUnsavedChanges;
- (void)__asyncQueryWiFiNetworkSyncStatus;
- (char)applyForService:(struct __SCNetworkService { } *)a0 withAuthorization:(id)a1;
- (id)initForOwner:(id)a0;
- (void)logMessageTracerAdvancedPrefs;
- (void)refreshForService:(struct __SCNetworkService { } *)a0;
- (void)setHasUnsavedChanges:(char)a0;
- (void)updateScanUI:(char)a0;

@end
