@class _TtC15MapsSuggestions10TimerClass, NSString, NSArray, OS_dispatch_queue;

@interface MapsSuggestions.MapsSuggestionsEventStreamer : NSObject <MapsSuggestionsObject> {
    void /* function */ uniqueName;
    void /* function */ notificationName;
    void /* function */ _notifyTimers;
}

@property (nonatomic, copy) NSString *uniqueName;
@property (nonatomic, readonly) double lookAheadPeriod;
@property (nonatomic, readonly) double pingInterval;
@property (nonatomic, readonly) NSString *notificationName;
@property (nonatomic, readonly) OS_dispatch_queue *_queue;
@property (nonatomic, retain) _TtC15MapsSuggestions10TimerClass *_scanTimer;
@property (nonatomic, copy) NSArray *_notifyTimers;
@property (nonatomic, readonly) double _delay;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)broadcastEventFrom:(id)a0 to:(id)a1;
- (id)initWithLookAheadPeriod:(double)a0 pingInterval:(double)a1 notificationName:(id)a2 identifyingName:(id)a3;
- (void)invalidateAllTimers;
- (void)rescan;
- (void)scanForStreamableEvents;

@end
