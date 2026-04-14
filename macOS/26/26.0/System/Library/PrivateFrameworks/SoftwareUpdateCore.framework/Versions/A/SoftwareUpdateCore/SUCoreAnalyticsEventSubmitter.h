@class NSMutableDictionary, NSDictionary, SUCoreLog, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreAnalyticsEventSubmitter : NSObject {
    NSMutableDictionary *_events;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property (readonly, retain, nonatomic) NSDictionary *events;
@property (retain, nonatomic) SUCoreLog *eventSubmitterLogger;

- (void)setEvent:(id)a0;
- (void)removeAllEvents;
- (void)removeEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)submitAllEvents;
- (BOOL)_queue_registerSendEvent:(id)a0;
- (void)_queue_removeAllEvents;
- (void)_queue_removeEvent:(id)a0;
- (void)_queue_removeEventsWithName:(id)a0;
- (void)_queue_setEvent:(id)a0;
- (BOOL)_queue_submitAllEvents;
- (BOOL)_queue_submitEvent:(id)a0;
- (BOOL)_queue_submitEventsWithName:(id)a0;
- (void)removeEventsWithName:(id)a0;
- (BOOL)submitEvent:(id)a0;
- (BOOL)submitEventsWithName:(id)a0;

@end
