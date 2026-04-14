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

- (id)IPv6Addresses;
- (id)IPv4SubnetMasks;
- (id)airPortStateConfiguration;
- (id)IPv4Addresses;
- (id)__linkStateConfig;
- (void)startEventMonitoring;
- (void)__startEventMonitoring;
- (BOOL)isMonitoringEvents;
- (id)airPortSetupConfiguration;
- (id)IPv6PrefixLengths;
- (id)init;
- (id)__IPv4StateConfig;
- (void)restartEventMonitoring;
- (id)__IPv6StateConfig;
- (id)IPv4BroadcastAddresses;
- (id)initWithInterfaceName:(id)a0;
- (void)stopEventMonitoring;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isLinkActive;
- (id)IPv6Flags;
- (id)__networkInterfaceHardwareAddress;

@end
