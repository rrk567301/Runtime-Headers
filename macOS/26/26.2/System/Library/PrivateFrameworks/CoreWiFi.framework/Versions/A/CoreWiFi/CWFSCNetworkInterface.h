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

- (void)restartEventMonitoring;
- (id)IPv4Addresses;
- (void)startEventMonitoring;
- (void)__startEventMonitoring;
- (BOOL)isMonitoringEvents;
- (id)__linkStateConfig;
- (void)stopEventMonitoring;
- (id)initWithInterfaceName:(id)a0;
- (BOOL)isLinkActive;
- (id)__IPv4StateConfig;
- (void).cxx_destruct;
- (id)IPv4SubnetMasks;
- (id)airPortStateConfiguration;
- (id)IPv4BroadcastAddresses;
- (id)__networkInterfaceHardwareAddress;
- (id)IPv6Flags;
- (id)IPv6Addresses;
- (id)init;
- (id)__IPv6StateConfig;
- (id)IPv6PrefixLengths;
- (id)airPortSetupConfiguration;
- (void)dealloc;

@end
