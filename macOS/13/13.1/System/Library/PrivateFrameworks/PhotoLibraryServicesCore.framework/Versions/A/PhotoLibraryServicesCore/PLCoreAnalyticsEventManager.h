@class NSMutableDictionary;

@interface PLCoreAnalyticsEventManager : NSObject {
    NSMutableDictionary *_eventMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setPayloadValue:(id)a0 forKey:(id)a1 onEventWithName:(id)a2;
- (void)publishEventWithName:(id)a0;
- (double)startRecordingTimedEventToken;
- (id)valueForKey:(id)a0 onEventWithName:(id)a1;
- (void)stopRecordingTimedEventWithToken:(double)a0 forKey:(id)a1 onEventWithName:(id)a2;
- (void)removeEventWithName:(id)a0;
- (void)addRecordingTimedEventSnippetWithToken:(double)a0 forKey:(id)a1 onEventWithName:(id)a2;
- (id)_eventForEventName:(id)a0;
- (void)_setPayloadValue:(id)a0 forKey:(id)a1 onEventWithName:(id)a2 eventBlock:(id /* block */)a3;
- (void)setPayloadValue:(id)a0 forKey:(id)a1 onlyOnExistingEventWithName:(id)a2;
- (void)mergePayload:(id)a0 onEventWithName:(id)a1;
- (void)removePayloadValueForKey:(id)a0 onEventWithName:(id)a1;
- (id)rawEventForEventName:(id)a0;
- (void)publishAllEvents;

@end
