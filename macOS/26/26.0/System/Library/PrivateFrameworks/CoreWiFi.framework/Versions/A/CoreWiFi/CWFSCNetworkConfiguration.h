@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (void)stopEventMonitoring;
- (id)IPv6Addresses;
- (void)startEventMonitoring;
- (id)IPv4Addresses;
- (id)IPv6PrefixLengths;
- (BOOL)isMonitoringEvents;
- (void)__startEventMonitoring;
- (id)__networkInterfaceStateConfig;
- (id)DNSDomainName;
- (id)IPv6Router;
- (void)dealloc;
- (id)IPv6ServiceID;
- (id)networkInterfaceNames;
- (id)IPv4ServiceID;
- (id)IEEE80211NetworkInterfacesNames;
- (BOOL)__isIEEE80211NetworkInterfaceName:(id)a0;
- (id)__IPv6SetupConfigForServiceID:(id)a0;
- (id)DNSSearchDomains;
- (id)IPv6InterfaceName;
- (id)IPv6ServiceName;
- (id)__DNSGlobalStateConfig;
- (id)init;
- (id)__IPv4StateConfigForServiceID:(id)a0;
- (id)IPv4SubnetMasks;
- (id)DNSServerAddresses;
- (id)__nameForServiceWithID:(id)a0;
- (id)__IPv6GlobalStateConfig;
- (void)restartEventMonitoring;
- (id)__IPv4GlobalStateConfig;
- (id)IPv4ServiceName;
- (id)__IPv4SetupConfigForServiceID:(id)a0;
- (id)IPv4Router;
- (id)IPv4InterfaceName;
- (id)__IPv6StateConfigForServiceID:(id)a0;
- (void).cxx_destruct;

@end
