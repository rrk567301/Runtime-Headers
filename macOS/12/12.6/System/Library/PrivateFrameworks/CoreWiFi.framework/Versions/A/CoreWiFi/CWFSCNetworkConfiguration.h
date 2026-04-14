@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)IPv6Addresses;
- (id)IPv4Addresses;
- (void)__startEventMonitoring;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;
- (BOOL)isMonitoringEvents;
- (id)IPv4Router;
- (id)IPv6Router;
- (id)DNSDomainName;
- (id)DNSServerAddresses;
- (id)IPv4InterfaceName;
- (id)IPv6InterfaceName;
- (id)IPv4ServiceID;
- (id)IPv6ServiceID;
- (id)IPv4ServiceName;
- (id)IPv6ServiceName;
- (id)__IPv4GlobalStateConfig;
- (id)__nameForServiceWithID:(id)a0;
- (id)__IPv4StateConfigForServiceID:(id)a0;
- (id)__IPv4SetupConfigForServiceID:(id)a0;
- (id)__IPv6GlobalStateConfig;
- (id)__IPv6StateConfigForServiceID:(id)a0;
- (id)__IPv6SetupConfigForServiceID:(id)a0;
- (id)__DNSGlobalStateConfig;
- (id)IPv4SubnetMasks;
- (id)IPv6PrefixLengths;
- (id)DNSSearchDomains;

@end
