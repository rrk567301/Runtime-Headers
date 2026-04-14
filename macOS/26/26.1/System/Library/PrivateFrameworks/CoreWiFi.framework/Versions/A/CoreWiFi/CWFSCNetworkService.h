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

- (id)__IPv6StateConfig;
- (void)startEventMonitoring;
- (id)IPv6ConfigMethod;
- (BOOL)__updateServiceID;
- (id)IPv6NetworkSignature;
- (id)DHCPLeaseExpirationTimestamp;
- (id)__DHCPInfo;
- (BOOL)isMonitoringEvents;
- (id)IPv4Addresses;
- (id)initWithInterfaceName:(id)a0;
- (id)DHCPServerID;
- (id)IPv4SubnetMasks;
- (id)DHCPLeaseStartTimestamp;
- (id)DNSServerAddresses;
- (void)stopEventMonitoring;
- (id)__IPv4SetupConfig;
- (id)IPv4Router;
- (id)IPv6Addresses;
- (id)__DNSStateConfig;
- (id)__DHCPv6StateConfig;
- (id)__DNSSetupConfig;
- (id)serviceName;
- (id)__DHCPStateConfig;
- (id)DNSDomainName;
- (id)__IPv4StateConfig;
- (id)__proxiesSetupConfig;
- (void)restartEventMonitoring;
- (void)dealloc;
- (BOOL)__refreshServiceID;
- (id)IPv4NetworkSignature;
- (id)IPv4ARPResolvedIPAddress;
- (void).cxx_destruct;
- (id)DHCPv6ServerID;
- (id)__serviceStateConfig;
- (BOOL)refreshServiceID;
- (id)IPv4ARPResolvedHardwareAddress;
- (void)__refreshNotificationKeys;
- (id)IPv4ConfigMethod;
- (id)__IPv6SetupConfig;
- (id)IPv6Router;
- (id)init;

@end
