@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SDEventMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *eventHandlers;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)startMonitoringEvents;
- (void)_startMonitoringEventsForStream:(unsigned long long)a0;
- (void)registerHandler:(id /* block */)a0 forEventName:(id)a1;
- (void)unregisterHandler:(id /* block */)a0 forEventName:(id)a1;

@end
