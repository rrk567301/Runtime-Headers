@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CWFIO80211 : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct IONotificationPort { } *_portRef;
    struct IONotificationPort { } *_portRefVirtual;
    unsigned int _publishIO80211SkywalkInterface;
    unsigned int _terminatedIO80211SkywalkInterface;
    NSMutableDictionary *_publishIO80211VirtualInterfaceMap;
    NSMutableDictionary *_terminatedIO80211VirtualInterfaceMap;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (void)stopEventMonitoring;
- (void)startEventMonitoring;
- (BOOL)isMonitoringEvents;
- (id)IO80211ControllerInfo;
- (void)dealloc;
- (id)__IO80211InfoMatchingService:(unsigned int)a0;
- (id)init;
- (id)IO80211InterfaceInfo:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
