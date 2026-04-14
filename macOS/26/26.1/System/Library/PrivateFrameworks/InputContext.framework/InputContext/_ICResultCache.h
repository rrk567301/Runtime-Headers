@class NSArray, NSDate;

@interface _ICResultCache : NSObject {
    NSArray *_cachedResults;
    NSDate *_start;
    double _ttlInSeconds;
}

- (void)clear;
- (BOOL)fuzzyMatchItem:(id)a0 withValue:(id)a1;
- (void)addResults:(id)a0;
- (id)searchWithValue:(id)a0;
- (id)initWithTTL:(double)a0;
- (void).cxx_destruct;
- (id)searchWithTrigger:(id)a0;

@end
