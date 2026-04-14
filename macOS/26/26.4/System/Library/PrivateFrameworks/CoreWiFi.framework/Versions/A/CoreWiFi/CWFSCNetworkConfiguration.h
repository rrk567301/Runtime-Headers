@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (id)IPv6ServiceID;
- (id)IPv4ServiceID;
- (id)IPv6Router;
- (void)stopEventMonitoring;
- (id)IPv4Addresses;
- (void)startEventMonitoring;
- (void)restartEventMonitoring;
- (BOOL)__isIEEE80211NetworkInterfaceName:(id)a0;
- (id)__IPv4GlobalStateConfig;
- (BOOL)isMonitoringEvents;
- (id)DNSSearchDomains;
- (id)__IPv4StateConfigForServiceID:(id)a0;
- (id)__IPv4SetupConfigForServiceID:(id)a0;
- (id)IPv6PrefixLengths;
- (id)__IPv6GlobalStateConfig;
- (void)__startEventMonitoring;
- (id)__DNSGlobalStateConfig;
- (id)IPv4InterfaceName;
- (id)IPv6ServiceName;
- (void).cxx_destruct;
- (id)__nameForServiceWithID:(id)a0;
- (id)networkInterfaceNames;
- (id)DNSServerAddresses;
- (id)IPv4Router;
- (id)init;
- (id)IPv6Addresses;
- (id)__IPv6StateConfigForServiceID:(id)a0;
- (id)IPv6InterfaceName;
- (id)IEEE80211NetworkInterfacesNames;
- (id)__IPv6SetupConfigForServiceID:(id)a0;
- (id)__networkInterfaceStateConfig;
- (id)IPv4ServiceName;
- (id)DNSDomainName;
- (id)IPv4SubnetMasks;
- (void)dealloc;

@end
