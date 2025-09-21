@class NSString, HIDServiceClient, STMediaStatusDomain, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface PILStateMonitor : NSObject <CBHIDServiceProtocol> {
    struct IONotificationPort { } *_ioNotificationPort;
    unsigned int _ioNotificationObject;
    unsigned int _ioServiceArrivalIterator;
    HIDServiceClient *_pilPlugin;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_logHandle;
    STMediaStatusDomain *_sharedMediaDomain;
}

@property BOOL PILCameraState;
@property BOOL PILMicState;
@property unsigned long long cilSource;
@property unsigned long long milSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)dealloc;
- (void)stop;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)handleCameraServiceArrival:(unsigned int)a0;
- (void)handlePILHIDEvent:(int)a0;
- (void)handlePILIOServiceEvent:(unsigned int)a0;
- (void)handlePILSystemStatusEvent:(id)a0;
- (id)initWithQueue:(id)a0 cilSource:(unsigned long long)a1 milSource:(unsigned long long)a2;
- (void)registerForAllCameraNotifications;
- (void)registerForAllSystemStatusNotifications;
- (void)startCameraServiceLookup;
- (void)unregisterForAllCameraNotifications;
- (void)unregisterForAllSystemStatusNotifications;
- (void)unregisterForCameraStateNotifications;
- (void)updatePILStateForControl:(unsigned long long)a0 fromSource:(unsigned long long)a1 newState:(BOOL)a2;

@end
