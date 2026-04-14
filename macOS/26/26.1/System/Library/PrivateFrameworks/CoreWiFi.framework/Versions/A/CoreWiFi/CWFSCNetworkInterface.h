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

- (id)__IPv6StateConfig;
- (void)startEventMonitoring;
- (id)airPortSetupConfiguration;
- (void)__startEventMonitoring;
- (BOOL)isMonitoringEvents;
- (id)IPv4Addresses;
- (id)__networkInterfaceHardwareAddress;
- (id)initWithInterfaceName:(id)a0;
- (id)IPv4BroadcastAddresses;
- (id)IPv4SubnetMasks;
- (id)__linkStateConfig;
- (void)stopEventMonitoring;
- (id)IPv6Addresses;
- (id)__IPv4StateConfig;
- (BOOL)isLinkActive;
- (void)restartEventMonitoring;
- (id)airPortStateConfiguration;
- (void)dealloc;
- (void).cxx_destruct;
- (id)IPv6Flags;
- (id)IPv6PrefixLengths;
- (id)init;

@end
