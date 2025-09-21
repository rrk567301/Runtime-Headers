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

- (void)stopEventMonitoring;
- (id)IPv6Addresses;
- (id)initWithInterfaceName:(id)a0;
- (void)startEventMonitoring;
- (id)IPv4Addresses;
- (id)IPv6PrefixLengths;
- (BOOL)isMonitoringEvents;
- (void)__startEventMonitoring;
- (void)dealloc;
- (BOOL)isLinkActive;
- (id)__IPv6StateConfig;
- (id)airPortSetupConfiguration;
- (id)init;
- (id)IPv4SubnetMasks;
- (id)__IPv4StateConfig;
- (id)IPv6Flags;
- (void)restartEventMonitoring;
- (id)__networkInterfaceHardwareAddress;
- (id)IPv4BroadcastAddresses;
- (id)airPortStateConfiguration;
- (void).cxx_destruct;
- (id)__linkStateConfig;

@end
