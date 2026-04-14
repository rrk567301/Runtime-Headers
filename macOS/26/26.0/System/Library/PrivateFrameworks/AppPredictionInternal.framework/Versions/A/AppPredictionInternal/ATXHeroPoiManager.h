@class BMStream;

@interface ATXHeroPoiManager : NSObject {
    BMStream *_poiCategoryStream;
}

- (id)poiCategoryStream;
- (void)donateHeroPoiPredictions:(id)a0;
- (id)cachedPoiCategory;
- (id)poiCategoryStreamPublisher;
- (void)donatePoiCategoryToBiome:(id)a0 rank:(unsigned long long)a1 date:(id)a2;
- (id)mostRecentHighestRankedPoiCategory:(id)a0;
- (void)logCompletion:(id)a0;
- (id)poiCategoryEventsWithStreamPublisher:(id)a0;
- (id)poiCategoryPublisherBookmark;
- (void).cxx_destruct;
- (id)currentPoiCategory;

@end
