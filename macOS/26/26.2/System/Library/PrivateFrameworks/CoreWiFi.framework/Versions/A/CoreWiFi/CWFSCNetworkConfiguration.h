@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (void)restartEventMonitoring;
- (id)IPv4Router;
- (id)DNSDomainName;
- (id)IPv4Addresses;
- (id)__IPv6StateConfigForServiceID:(id)a0;
- (void)startEventMonitoring;
- (void)__startEventMonitoring;
- (id)__networkInterfaceStateConfig;
- (BOOL)isMonitoringEvents;
- (BOOL)__isIEEE80211NetworkInterfaceName:(id)a0;
- (id)IPv6ServiceID;
- (void)stopEventMonitoring;
- (id)IPv4InterfaceName;
- (id)DNSSearchDomains;
- (id)IPv6InterfaceName;
- (id)__DNSGlobalStateConfig;
- (id)networkInterfaceNames;
- (id)IPv6ServiceName;
- (id)IEEE80211NetworkInterfacesNames;
- (void).cxx_destruct;
- (id)IPv4SubnetMasks;
- (id)__IPv4StateConfigForServiceID:(id)a0;
- (id)IPv4ServiceName;
- (id)__nameForServiceWithID:(id)a0;
- (id)__IPv6SetupConfigForServiceID:(id)a0;
- (id)__IPv4SetupConfigForServiceID:(id)a0;
- (id)IPv6Router;
- (id)DNSServerAddresses;
- (id)IPv6Addresses;
- (id)init;
- (id)IPv6PrefixLengths;
- (id)__IPv4GlobalStateConfig;
- (id)__IPv6GlobalStateConfig;
- (id)IPv4ServiceID;
- (void)dealloc;

@end
