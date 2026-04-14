@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (void)startEventMonitoring;
- (id)__nameForServiceWithID:(id)a0;
- (void)__startEventMonitoring;
- (id)IEEE80211NetworkInterfacesNames;
- (BOOL)isMonitoringEvents;
- (id)IPv4Addresses;
- (id)__IPv6StateConfigForServiceID:(id)a0;
- (id)__IPv4GlobalStateConfig;
- (id)IPv4SubnetMasks;
- (id)DNSServerAddresses;
- (void)stopEventMonitoring;
- (id)__IPv4SetupConfigForServiceID:(id)a0;
- (id)IPv4Router;
- (id)IPv6Addresses;
- (id)__IPv4StateConfigForServiceID:(id)a0;
- (id)DNSSearchDomains;
- (id)DNSDomainName;
- (id)IPv4InterfaceName;
- (void)restartEventMonitoring;
- (id)networkInterfaceNames;
- (id)IPv6ServiceID;
- (void)dealloc;
- (id)IPv6ServiceName;
- (void).cxx_destruct;
- (id)__networkInterfaceStateConfig;
- (id)__DNSGlobalStateConfig;
- (id)__IPv6SetupConfigForServiceID:(id)a0;
- (id)IPv4ServiceID;
- (id)IPv6InterfaceName;
- (id)__IPv6GlobalStateConfig;
- (id)IPv6PrefixLengths;
- (id)IPv6Router;
- (id)IPv4ServiceName;
- (BOOL)__isIEEE80211NetworkInterfaceName:(id)a0;
- (id)init;

@end
