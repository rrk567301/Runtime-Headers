@class BMStream;

@interface ATXHeroPoiManager : NSObject {
    BMStream *_poiCategoryStream;
}

- (void)logCompletion:(id)a0;
- (id)cachedPoiCategory;
- (id)poiCategoryStreamPublisher;
- (void)donateHeroPoiPredictions:(id)a0;
- (id)poiCategoryStream;
- (id)poiCategoryEventsWithStreamPublisher:(id)a0;
- (id)currentPoiCategory;
- (void).cxx_destruct;
- (id)mostRecentHighestRankedPoiCategory:(id)a0;
- (id)poiCategoryPublisherBookmark;
- (void)donatePoiCategoryToBiome:(id)a0 rank:(unsigned long long)a1 date:(id)a2;

@end
