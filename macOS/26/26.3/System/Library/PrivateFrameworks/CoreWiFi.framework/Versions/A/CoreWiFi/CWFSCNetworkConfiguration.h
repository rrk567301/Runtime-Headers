@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (id)IPv6Addresses;
- (id)IPv4SubnetMasks;
- (id)__IPv4SetupConfigForServiceID:(id)a0;
- (id)IPv6ServiceID;
- (id)IPv4Addresses;
- (id)__DNSGlobalStateConfig;
- (BOOL)__isIEEE80211NetworkInterfaceName:(id)a0;
- (void)startEventMonitoring;
- (void)__startEventMonitoring;
- (BOOL)isMonitoringEvents;
- (id)IPv6PrefixLengths;
- (id)init;
- (id)IPv6ServiceName;
- (id)__IPv6SetupConfigForServiceID:(id)a0;
- (id)IPv6Router;
- (id)IEEE80211NetworkInterfacesNames;
- (void)restartEventMonitoring;
- (id)IPv4Router;
- (id)IPv4ServiceID;
- (id)DNSSearchDomains;
- (void)stopEventMonitoring;
- (void).cxx_destruct;
- (id)IPv4ServiceName;
- (void)dealloc;
- (id)networkInterfaceNames;
- (id)__nameForServiceWithID:(id)a0;
- (id)__IPv4StateConfigForServiceID:(id)a0;
- (id)DNSDomainName;
- (id)IPv4InterfaceName;
- (id)IPv6InterfaceName;
- (id)__networkInterfaceStateConfig;
- (id)__IPv6GlobalStateConfig;
- (id)DNSServerAddresses;
- (id)__IPv4GlobalStateConfig;
- (id)__IPv6StateConfigForServiceID:(id)a0;

@end
