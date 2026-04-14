@class NSObject, MapsSuggestionsAppGuardian, _TtC15MapsSuggestions30MapsSuggestionsContactActivity;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsContactActivitySource : MapsSuggestionsBaseSource <MapsSuggestions.MapsSuggestionsContactActivityDelegate> {
    _TtC15MapsSuggestions30MapsSuggestionsContactActivity *_contactActivity;
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsAppGuardian *_guardian;
}

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;

- (void)stop;
- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void).cxx_destruct;
- (void)start;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (void)contactActivityUpdated;
- (id)initWithContactActivity:(id)a0 delegate:(id)a1 guardian:(id)a2 name:(id)a3;

@end
