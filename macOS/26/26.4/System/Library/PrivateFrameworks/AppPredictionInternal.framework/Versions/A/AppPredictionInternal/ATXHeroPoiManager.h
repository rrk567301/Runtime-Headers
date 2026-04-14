@class BMStream;

@interface ATXHeroPoiManager : NSObject {
    BMStream *_poiCategoryStream;
}

- (void)donatePoiCategoryToBiome:(id)a0 rank:(unsigned long long)a1 date:(id)a2;
- (id)currentPoiCategory;
- (id)poiCategoryStream;
- (id)poiCategoryStreamPublisher;
- (id)poiCategoryPublisherBookmark;
- (void).cxx_destruct;
- (id)poiCategoryEventsWithStreamPublisher:(id)a0;
- (void)logCompletion:(id)a0;
- (void)donateHeroPoiPredictions:(id)a0;
- (id)cachedPoiCategory;
- (id)mostRecentHighestRankedPoiCategory:(id)a0;

@end
