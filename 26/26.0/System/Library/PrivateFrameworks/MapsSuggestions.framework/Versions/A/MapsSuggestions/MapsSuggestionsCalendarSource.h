@class MapsSuggestionsEventKit, NSString, MapsSuggestionsAppGuardian, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsCalendarSource : MapsSuggestionsBaseSource <MapsSuggestionsEventKitObserver, MapsSuggestionsPreloadableSource> {
    MapsSuggestionsEventKit *_eventKit;
    MapsSuggestionsAppGuardian *_guardian;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;

- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (id)initWithDelegate:(id)a0 eventKit:(id)a1 guardian:(id)a2 name:(id)a3;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void)eventKitDidChange:(id)a0;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (BOOL)suggestionsEntriesAtLocation:(id)a0 period:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;

@end
