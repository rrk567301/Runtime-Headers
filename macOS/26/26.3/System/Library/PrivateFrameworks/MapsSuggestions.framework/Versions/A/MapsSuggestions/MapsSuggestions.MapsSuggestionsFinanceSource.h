@interface MapsSuggestions.MapsSuggestionsFinanceSource : MapsSuggestionsBaseSource <MapsSuggestionsObject> {
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ _financeKit;
    void /* unknown type, empty encoding */ _updateCompleteHandler;
    void /* unknown type, empty encoding */ queue;
}

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (id)initFromResourceDepot:(id)a0;
- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (void)start;
- (void)stop;
- (id)init;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (void).cxx_destruct;

@end
