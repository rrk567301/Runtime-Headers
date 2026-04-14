@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkService : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    struct __SCPreferences { } *_prefsRef;
    BOOL _isMonitoringEvents;
    NSString *_serviceID;
    NSString *_serviceName;
}

@property (copy) id /* block */ eventHandler;
@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSString *serviceID;

- (void)stopEventMonitoring;
- (id)IPv6Addresses;
- (id)initWithInterfaceName:(id)a0;
- (void)startEventMonitoring;
- (id)IPv4Addresses;
- (id)IPv4NetworkSignature;
- (BOOL)isMonitoringEvents;
- (id)IPv6NetworkSignature;
- (id)DHCPServerID;
- (id)DHCPv6ServerID;
- (id)DNSDomainName;
- (id)IPv6Router;
- (id)__proxiesSetupConfig;
- (void)dealloc;
- (id)__IPv6StateConfig;
- (id)IPv4ARPResolvedHardwareAddress;
- (id)IPv6ConfigMethod;
- (id)DHCPLeaseExpirationTimestamp;
- (id)init;
- (BOOL)__updateServiceID;
- (id)__IPv4SetupConfig;
- (id)IPv4SubnetMasks;
- (id)DNSServerAddresses;
- (id)IPv4ConfigMethod;
- (id)DHCPLeaseStartTimestamp;
- (id)__DNSStateConfig;
- (id)__IPv6SetupConfig;
- (id)IPv4ARPResolvedIPAddress;
- (void)__refreshNotificationKeys;
- (id)__IPv4StateConfig;
- (id)serviceName;
- (void)restartEventMonitoring;
- (id)__DHCPInfo;
- (id)__DHCPv6StateConfig;
- (BOOL)__refreshServiceID;
- (id)__serviceStateConfig;
- (id)IPv4Router;
- (BOOL)refreshServiceID;
- (id)__DNSSetupConfig;
- (void).cxx_destruct;
- (id)__DHCPStateConfig;

@end
