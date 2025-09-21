@interface MapsSuggestions.MapsSuggestionsFakeStreamer : MapsSuggestions.MapsSuggestionsEventStreamer {
    void /* function */ callBackBlock;
}

@property (nonatomic, copy) id /* block */ callBackBlock;
@property (nonatomic) BOOL simpleCallBack;
@property (nonatomic) BOOL tenSecondEvent;
@property (nonatomic) BOOL alreadyStartedEvent;
@property (nonatomic) BOOL doubleEvent;

- (void).cxx_destruct;
- (id)initWithLookAheadPeriod:(double)a0 pingInterval:(double)a1 notificationName:(id)a2 callBackBlock:(id /* block */)a3 simpleCallBack:(BOOL)a4 tenSecondEvent:(BOOL)a5 alreadyStartedEvent:(BOOL)a6 doubleEvent:(BOOL)a7;
- (id)initWithLookAheadPeriod:(double)a0 pingInterval:(double)a1 notificationName:(id)a2 identifyingName:(id)a3;
- (void)scanForStreamableEvents;

@end
