@class NSArray, RTMapServiceManager;

@interface RTMapsSupportManager : RTService <MapsSync.MapsSyncStoreDelegate>

@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (copy, nonatomic) NSArray *storeSubscriptionTypes;

- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_fetchHistoryEntryRoutesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchHistoryEntryPlaceDisplaysWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)_setup;
- (void)fetchPinnedPlacesWithHandler:(id /* block */)a0;
- (long long)queryTypeForMapsSyncClass:(Class)a0;
- (id)initWithMapServiceManager:(id)a0;
- (void)fetchHistoryEntryPlaceDisplaysWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchReviewedPlacesWrapperWithOptions:(id)a0 handler:(id /* block */)a1;
- (int)castReferenceFrame:(int)a0;
- (void)fetchReviewedPlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (void)_fetchPinnedPlacesWithHandler:(id /* block */)a0;
- (id)init;
- (void)_fetchFavoriteItemsWithHandler:(id /* block */)a0;
- (id)stringForQueryType:(long long)a0;
- (void)_fetchCollectionPlaceItemsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchHistoryPlaceItemsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)clearParkedCarBulletin;
- (void)_fetchFavoritePlacesWithHandler:(id /* block */)a0;
- (void)_fetchFavoritePlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchReviewedPlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)storeDidChange:(id)a0;
- (void)_showParkedCarBulletinForEvent:(id)a0;
- (void)_clearParkedCarBulletin;
- (void)_showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)fetchHistoryEntryRoutesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchFavoritePlacesWithHandler:(id /* block */)a0;
- (void)_fetchHistoryDirectionsItemsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchFavoritePlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)storeChangeNotificationClasses;

@end
