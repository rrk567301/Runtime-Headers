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

- (id)IPv6NetworkSignature;
- (id)IPv6Router;
- (void)stopEventMonitoring;
- (id)IPv4Addresses;
- (void)startEventMonitoring;
- (id)IPv6ConfigMethod;
- (void)restartEventMonitoring;
- (id)__DHCPStateConfig;
- (id)IPv4NetworkSignature;
- (id)DHCPv6ServerID;
- (id)DHCPServerID;
- (id)__DHCPInfo;
- (id)__serviceStateConfig;
- (id)__IPv4StateConfig;
- (BOOL)isMonitoringEvents;
- (id)serviceName;
- (id)IPv4ARPResolvedHardwareAddress;
- (id)initWithInterfaceName:(id)a0;
- (id)IPv4ARPResolvedIPAddress;
- (id)IPv4ConfigMethod;
- (id)__DNSStateConfig;
- (id)DHCPLeaseExpirationTimestamp;
- (void).cxx_destruct;
- (id)__DNSSetupConfig;
- (void)__refreshNotificationKeys;
- (id)__IPv6StateConfig;
- (id)DNSServerAddresses;
- (id)IPv4Router;
- (id)__DHCPv6StateConfig;
- (id)init;
- (id)IPv6Addresses;
- (id)__IPv4SetupConfig;
- (id)__IPv6SetupConfig;
- (BOOL)__refreshServiceID;
- (id)__proxiesSetupConfig;
- (BOOL)refreshServiceID;
- (id)DNSDomainName;
- (id)IPv4SubnetMasks;
- (void)dealloc;
- (BOOL)__updateServiceID;
- (id)DHCPLeaseStartTimestamp;

@end
