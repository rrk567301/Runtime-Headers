@class NSArray, RTMapServiceManager;

@interface RTMapsSupportManager : RTService <MapsSync.MapsSyncStoreDelegate>

@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (copy, nonatomic) NSArray *storeSubscriptionTypes;

- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_fetchPinnedPlacesWithHandler:(id /* block */)a0;
- (void)_fetchHistoryDirectionsItemsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_setup;
- (void)_fetchFavoriteItemsWithHandler:(id /* block */)a0;
- (void)_showParkedCarBulletinForEvent:(id)a0;
- (id)storeChangeNotificationClasses;
- (void)_fetchHistoryPlaceItemsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)storeDidChange:(id)a0;
- (void)fetchPinnedPlacesWithHandler:(id /* block */)a0;
- (void)_showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void).cxx_destruct;
- (void)_fetchFavoritePlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchHistoryEntryRoutesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (id)initWithMapServiceManager:(id)a0;
- (void)_fetchHistoryEntryPlaceDisplaysWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchHistoryEntryRoutesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchFavoritePlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (int)castReferenceFrame:(int)a0;
- (void)_fetchFavoritePlacesWithHandler:(id /* block */)a0;
- (void)_fetchCollectionPlaceItemsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchFavoritePlacesWithHandler:(id /* block */)a0;
- (long long)queryTypeForMapsSyncClass:(Class)a0;
- (void)clearParkedCarBulletin;
- (id)stringForQueryType:(long long)a0;
- (void)_clearParkedCarBulletin;
- (void)fetchHistoryEntryPlaceDisplaysWithOptions:(id)a0 handler:(id /* block */)a1;

@end
