@class BMStream;

@interface ATXHeroPoiManager : NSObject {
    BMStream *_poiCategoryStream;
}

- (id)cachedPoiCategory;
- (id)poiCategoryStream;
- (void)donatePoiCategoryToBiome:(id)a0 rank:(unsigned long long)a1 date:(id)a2;
- (void)donateHeroPoiPredictions:(id)a0;
- (id)poiCategoryStreamPublisher;
- (id)poiCategoryPublisherBookmark;
- (void).cxx_destruct;
- (id)mostRecentHighestRankedPoiCategory:(id)a0;
- (id)currentPoiCategory;
- (id)poiCategoryEventsWithStreamPublisher:(id)a0;
- (void)logCompletion:(id)a0;

@end
