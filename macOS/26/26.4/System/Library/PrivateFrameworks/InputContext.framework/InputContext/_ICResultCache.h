@class NSArray, NSDate;

@interface _ICResultCache : NSObject {
    NSArray *_cachedResults;
    NSDate *_start;
    double _ttlInSeconds;
}

- (void)addResults:(id)a0;
- (id)searchWithTrigger:(id)a0;
- (void)clear;
- (id)searchWithValue:(id)a0;
- (BOOL)fuzzyMatchItem:(id)a0 withValue:(id)a1;
- (void).cxx_destruct;
- (id)initWithTTL:(double)a0;

@end
