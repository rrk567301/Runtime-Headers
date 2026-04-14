@interface MapsSuggestions.MapsSuggestionsEventKitStreamer : MapsSuggestions.MapsSuggestionsEventStreamer <MapsSuggestionsEventKitObserver> {
    void /* unknown type, empty encoding */ _eventKit;
    void /* unknown type, empty encoding */ _keyListenerBlock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)eventKitDidChange:(id)a0;
- (id)initWithLookAheadPeriod:(double)a0 pingInterval:(double)a1 notificationName:(id)a2 identifyingName:(id)a3;
- (id)initWithResourceDepot:(id)a0 notificationName:(id)a1;
- (void)scanForStreamableEvents;

@end
