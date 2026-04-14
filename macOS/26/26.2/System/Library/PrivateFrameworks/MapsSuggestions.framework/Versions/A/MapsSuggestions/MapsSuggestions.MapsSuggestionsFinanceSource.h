@interface MapsSuggestions.MapsSuggestionsFinanceSource : MapsSuggestionsBaseSource <MapsSuggestionsObject> {
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ _financeKit;
    void /* unknown type, empty encoding */ _updateCompleteHandler;
    void /* unknown type, empty encoding */ queue;
}

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;

- (void)stop;
- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void).cxx_destruct;
- (void)start;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (id)init;
- (id)initFromResourceDepot:(id)a0;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;

@end
