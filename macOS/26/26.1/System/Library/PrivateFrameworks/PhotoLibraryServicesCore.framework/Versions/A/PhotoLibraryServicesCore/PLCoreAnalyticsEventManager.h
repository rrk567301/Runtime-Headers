@class NSMutableDictionary;

@interface PLCoreAnalyticsEventManager : NSObject {
    NSMutableDictionary *_eventMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property BOOL allowEventPublish;

- (void)publishAllEvents;
- (void)mergePayload:(id)a0 onEventWithName:(id)a1;
- (id)_eventForEventName:(id)a0;
- (double)startRecordingTimedEventToken;
- (id)description;
- (void)setPayloadValue:(id)a0 forKey:(id)a1 onlyOnExistingEventWithName:(id)a2;
- (id)valueForKey:(id)a0 onEventWithName:(id)a1;
- (id)descriptionForEventName:(id)a0;
- (id)rawEventForEventName:(id)a0;
- (BOOL)hasEventWithName:(id)a0;
- (void)removeEventWithName:(id)a0;
- (void)publishEventWithName:(id)a0;
- (void).cxx_destruct;
- (void)stopRecordingTimedEventWithToken:(double)a0 forKey:(id)a1 onEventWithName:(id)a2;
- (void)addRecordingTimedEventSnippetWithToken:(double)a0 forKey:(id)a1 onEventWithName:(id)a2;
- (void)_setPayloadValue:(id)a0 forKey:(id)a1 onEventWithName:(id)a2 eventBlock:(id /* block */)a3;
- (void)setPayloadValue:(id)a0 forKey:(id)a1 onEventWithName:(id)a2;
- (void)removePayloadValueForKey:(id)a0 onEventWithName:(id)a1;
- (id)init;

@end
