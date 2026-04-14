@class GEORouteHypothesizer, geo_isolater;

@interface GEORouteHypothesizerDelayer : NSObject {
    struct __CFBinaryHeap { } *_minHeap;
    GEORouteHypothesizer *_nextHypothesizer;
    geo_isolater *_isolater;
}

+ (void)checkin;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)_setNextHypothesizer:(id)a0;
- (void)delayStartOfHypothesizer:(id)a0;

@end
