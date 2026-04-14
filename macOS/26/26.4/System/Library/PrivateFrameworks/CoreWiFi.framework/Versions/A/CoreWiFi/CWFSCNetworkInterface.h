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

- (BOOL)isLinkActive;
- (void)stopEventMonitoring;
- (id)IPv4Addresses;
- (void)startEventMonitoring;
- (void)restartEventMonitoring;
- (id)__IPv4StateConfig;
- (BOOL)isMonitoringEvents;
- (id)IPv6PrefixLengths;
- (void)__startEventMonitoring;
- (id)airPortSetupConfiguration;
- (id)initWithInterfaceName:(id)a0;
- (id)__linkStateConfig;
- (void).cxx_destruct;
- (id)__IPv6StateConfig;
- (id)IPv4BroadcastAddresses;
- (id)init;
- (id)IPv6Addresses;
- (id)IPv6Flags;
- (id)airPortStateConfiguration;
- (id)IPv4SubnetMasks;
- (void)dealloc;
- (id)__networkInterfaceHardwareAddress;

@end
