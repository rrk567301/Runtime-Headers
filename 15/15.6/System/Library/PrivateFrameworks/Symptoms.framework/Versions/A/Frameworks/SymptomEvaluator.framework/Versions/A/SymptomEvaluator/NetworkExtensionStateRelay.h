@class NSMutableArray;

@interface NetworkExtensionStateRelay : NSObject {
    NSMutableArray *_vpnConnSessions;
    NSMutableArray *_contentFilterSessions;
    NSMutableArray *_dnsProxySessions;
}

@property (nonatomic) char vpnConnected;
@property (nonatomic) char contentFilterConnected;
@property (nonatomic) char dnsProxyConnected;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithQueue:(id)a0;
- (char)_createSessionForNEConfiguration:(id)a0 queue:(id)a1;
- (void)_removeNESessionWatchers;
- (void)_setUpNEConfigurationChangedWatcher:(id)a0;
- (char)_setupNetworkExtensionSessionMonitors:(id)a0;

@end
