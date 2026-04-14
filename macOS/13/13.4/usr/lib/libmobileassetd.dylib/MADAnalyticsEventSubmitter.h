@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MADAnalyticsEventSubmitter : NSObject {
    NSMutableDictionary *_events;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property (readonly, retain, nonatomic) NSDictionary *events;

- (id)init;
- (void).cxx_destruct;
- (void)setEvent:(id)a0;
- (void)removeAllEvents;
- (void)removeEvent:(id)a0;
- (void)submitAllEvents;
- (void)_queue_registerSendEvent:(id)a0;
- (void)_queue_removeAllEvents;
- (void)_queue_removeEvent:(id)a0;
- (void)_queue_removeEventsWithName:(id)a0;
- (void)_queue_setEvent:(id)a0;
- (void)_queue_submitAllEvents;
- (void)_queue_submitEvent:(id)a0;
- (void)_queue_submitEventsWithName:(id)a0;
- (void)removeEventsWithName:(id)a0;
- (void)submitEvent:(id)a0;
- (void)submitEventsWithName:(id)a0;

@end
