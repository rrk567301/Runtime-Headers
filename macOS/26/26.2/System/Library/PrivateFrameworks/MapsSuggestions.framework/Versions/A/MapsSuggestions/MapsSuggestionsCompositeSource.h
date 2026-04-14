@class NSString, NSMutableDictionary, NSMutableSet, NSObject, MapsSuggestionsSuppressor;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate, OS_dispatch_source;

@interface MapsSuggestionsCompositeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsSourceDelegate> {
    NSMutableSet *_sources;
    NSMutableDictionary *_nextUpdateTimes;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    NSObject<OS_dispatch_source> *_updateTimer;
    MapsSuggestionsSuppressor *_suppressor;
    NSMutableDictionary *_hasStarted;
}

@property BOOL running;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;

- (BOOL)addChildSource:(id)a0;
- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (double)updateSuggestionEntriesOfType:(long long)a0 handler:(id /* block */)a1;
- (void)test_sync;
- (unsigned long long)addOrUpdateSuggestionEntries:(id)a0 source:(id)a1;
- (void)stop;
- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (id)sources;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void).cxx_destruct;
- (void)test_awaitQueue;
- (id).cxx_construct;
- (void)start;
- (BOOL)attachSource:(id)a0;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (void)test_resetSuppressions;
- (double)test_suppressionDurationForBehavior:(long long)a0 type:(long long)a1;
- (BOOL)detachSource:(id)a0;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (id)children;
- (BOOL)removeChildSource:(id)a0;
- (id)test_dateUntilSuppressedEntry:(id)a0;
- (id)initWithDelegate:(id)a0 name:(id)a1;
- (void)dealloc;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;

@end
