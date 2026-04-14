@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkInterface : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSString *hardwareAddress;
@property (copy) id /* block */ eventHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)IPv6Addresses;
- (id)IPv4Addresses;
- (id)initWithInterfaceName:(id)a0;
- (void)__startEventMonitoring;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;
- (BOOL)isMonitoringEvents;
- (id)__IPv4StateConfig;
- (id)__IPv6StateConfig;
- (id)IPv4SubnetMasks;
- (id)IPv6PrefixLengths;
- (id)__networkInterfaceHardwareAddress;
- (id)__linkStateConfig;
- (id)airPortStateConfiguration;
- (id)airPortSetupConfiguration;
- (id)IPv4BroadcastAddresses;
- (id)IPv6Flags;
- (BOOL)isLinkActive;

@end
