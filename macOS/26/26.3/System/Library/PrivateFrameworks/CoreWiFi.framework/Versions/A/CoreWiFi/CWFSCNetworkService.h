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

- (id)IPv6Addresses;
- (id)IPv4SubnetMasks;
- (BOOL)__updateServiceID;
- (id)IPv4Addresses;
- (BOOL)refreshServiceID;
- (id)__DNSSetupConfig;
- (void)startEventMonitoring;
- (BOOL)isMonitoringEvents;
- (id)IPv4ConfigMethod;
- (id)__DHCPInfo;
- (id)IPv6ConfigMethod;
- (id)init;
- (id)IPv6Router;
- (id)__IPv4StateConfig;
- (void)restartEventMonitoring;
- (id)IPv4ARPResolvedIPAddress;
- (id)__IPv6StateConfig;
- (id)DHCPLeaseStartTimestamp;
- (id)IPv4Router;
- (id)initWithInterfaceName:(id)a0;
- (id)serviceName;
- (id)__proxiesSetupConfig;
- (id)__serviceStateConfig;
- (void)stopEventMonitoring;
- (id)DHCPLeaseExpirationTimestamp;
- (id)__IPv4SetupConfig;
- (id)IPv4NetworkSignature;
- (void).cxx_destruct;
- (id)IPv4ARPResolvedHardwareAddress;
- (void)dealloc;
- (id)__DHCPStateConfig;
- (id)DNSDomainName;
- (id)IPv6NetworkSignature;
- (id)__IPv6SetupConfig;
- (BOOL)__refreshServiceID;
- (id)__DHCPv6StateConfig;
- (id)DHCPv6ServerID;
- (id)DHCPServerID;
- (void)__refreshNotificationKeys;
- (id)DNSServerAddresses;
- (id)__DNSStateConfig;

@end
