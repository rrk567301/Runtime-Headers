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
    BOOL _isServiceEnabled;
}

@property (copy) id /* block */ eventHandler;
@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSString *serviceID;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)serviceName;
- (id)IPv6Addresses;
- (id)IPv4Addresses;
- (id)initWithInterfaceName:(id)a0;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;
- (BOOL)isMonitoringEvents;
- (BOOL)__updateServiceID;
- (void)__refreshNotificationKeys;
- (id)__IPv4StateConfig;
- (id)__IPv4SetupConfig;
- (id)__IPv6StateConfig;
- (id)__IPv6SetupConfig;
- (id)__DNSStateConfig;
- (id)__DNSSetupConfig;
- (id)__DHCPInfo;
- (id)__proxiesSetupConfig;
- (id)IPv4Router;
- (id)IPv6Router;
- (id)IPv6ConfigMethod;
- (id)IPv4ConfigMethod;
- (id)DNSDomainName;
- (id)DNSServerAddresses;
- (BOOL)isServiceEnabled;
- (id)DHCPLeaseStartTimestamp;
- (id)DHCPLeaseExpirationTimestamp;

@end
