@class NSString, NSObject, MapsSuggestionsRoutine;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsRoutineSource : MapsSuggestionsBaseSource <MapsSuggestionsParkedCarObserver, MapsSuggestionsSource, MapsSuggestionsPreloadableSource> {
    MapsSuggestionsRoutine *_routine;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;

- (void)stop;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (id)initWithRoutine:(id)a0 delegate:(id)a1 name:(id)a2;
- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (void).cxx_destruct;
- (char)suggestionsEntriesAtLocation:(id)a0 period:(id)a1 handler:(id /* block */)a2;
- (id).cxx_construct;
- (void)start;
- (void)updatedParkedCar;
- (void)dealloc;

@end
