@class NSString, MapsSuggestionsMapsSync, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsMapsSyncSource : MapsSuggestionsBaseSource <MapsSuggestionsMapsSyncObserver, MapsSuggestionsSource> {
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsMapsSync *_mapsSync;
}

@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isEnabled;
+ (unsigned long long)disposition;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithMapsSync:(id)a0 delegate:(id)a1 name:(id)a2;
- (void)awaitQueue;
- (char)canProduceEntriesOfType:(long long)a0;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (void)mapsSync:(id)a0 didChangeForContentType:(long long)a1;
- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;

@end
