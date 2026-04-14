@class NSString, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsMapsSyncConnector;

@interface MapsSuggestionsMapsSync : NSObject <MapsSuggestionsMapsSyncConnectorDelegate, MapsSuggestionsObject> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    id<MapsSuggestionsMapsSyncConnector> _connector;
    MapsSuggestionsObservers *_historyObservers;
    MapsSuggestionsObservers *_transitItemObservers;
    MapsSuggestionsObservers *_favoriteItemObservers;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeMapsSyncObserver:(id)a0 forContentType:(long long)a1;
- (id)initFromResourceDepot:(id)a0;
- (id)initWithMapsSyncConnector:(id)a0;
- (void)removeMapsSyncObserverForAllContentTypes:(id)a0;
- (char)entriesFromHistoryWithHandler:(id /* block */)a0;
- (char)deleteEntry:(id)a0 handler:(id /* block */)a1;
- (char)didProduceRatingRequestForMapItem:(id)a0 handler:(id /* block */)a1;
- (char)homeWorkSchoolShortcutsFromFavoritesWithHandler:(id /* block */)a0;
- (char)userHasFavoriteTransitLinesWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)mapsSyncDidChangeForType:(long long)a0;
- (char)mapItemsForHistoricPlaces:(BOOL)a0 routes:(BOOL)a1 maxAge:(double)a2 handler:(id /* block */)a3;
- (char)canProduceRatingRequestForMapItem:(id)a0 maxAge:(double)a1 handler:(id /* block */)a2;
- (char)queryMapsSyncWithRTMapItemMuid:(unsigned long long)a0 name:(id)a1 address:(id)a2 completion:(id /* block */)a3;
- (void)addMapsSyncObserver:(id)a0 forContentType:(long long)a1;
- (char)userHasFavoriteTransitPOIsWithHandler:(id /* block */)a0;
- (id).cxx_construct;
- (char)shortcutsFromFavoritesWithHandler:(id /* block */)a0;
- (char)durationSinceLastTransitHistoryRoute:(id /* block */)a0;

@end
