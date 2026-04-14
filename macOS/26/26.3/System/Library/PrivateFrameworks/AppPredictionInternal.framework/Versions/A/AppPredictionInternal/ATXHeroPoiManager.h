@class BMStream;

@interface ATXHeroPoiManager : NSObject {
    BMStream *_poiCategoryStream;
}

- (void)logCompletion:(id)a0;
- (void)donatePoiCategoryToBiome:(id)a0 rank:(unsigned long long)a1 date:(id)a2;
- (id)cachedPoiCategory;
- (id)currentPoiCategory;
- (void).cxx_destruct;
- (id)poiCategoryStreamPublisher;
- (id)poiCategoryEventsWithStreamPublisher:(id)a0;
- (id)mostRecentHighestRankedPoiCategory:(id)a0;
- (id)poiCategoryStream;
- (id)poiCategoryPublisherBookmark;
- (void)donateHeroPoiPredictions:(id)a0;

@end
