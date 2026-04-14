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

- (void)restartEventMonitoring;
- (id)IPv4Router;
- (id)DNSDomainName;
- (id)IPv4Addresses;
- (id)__serviceStateConfig;
- (void)startEventMonitoring;
- (id)__proxiesSetupConfig;
- (BOOL)isMonitoringEvents;
- (void)stopEventMonitoring;
- (id)__DHCPInfo;
- (id)IPv4ARPResolvedHardwareAddress;
- (id)initWithInterfaceName:(id)a0;
- (id)DHCPv6ServerID;
- (id)__DHCPv6StateConfig;
- (id)__IPv6SetupConfig;
- (id)IPv6NetworkSignature;
- (id)DHCPLeaseStartTimestamp;
- (id)__IPv4StateConfig;
- (void).cxx_destruct;
- (id)IPv4SubnetMasks;
- (void)__refreshNotificationKeys;
- (id)IPv4NetworkSignature;
- (id)IPv4ConfigMethod;
- (id)__DNSSetupConfig;
- (BOOL)refreshServiceID;
- (id)IPv4ARPResolvedIPAddress;
- (id)IPv6Router;
- (id)DNSServerAddresses;
- (id)IPv6ConfigMethod;
- (id)DHCPServerID;
- (id)DHCPLeaseExpirationTimestamp;
- (id)__DHCPStateConfig;
- (id)IPv6Addresses;
- (BOOL)__updateServiceID;
- (id)__IPv4SetupConfig;
- (id)__DNSStateConfig;
- (id)init;
- (id)serviceName;
- (id)__IPv6StateConfig;
- (BOOL)__refreshServiceID;
- (void)dealloc;

@end
