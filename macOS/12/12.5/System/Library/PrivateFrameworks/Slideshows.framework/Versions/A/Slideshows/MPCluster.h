@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface MPCluster : NSObject {
    NSMutableSet *mPathsInCluster;
}

@property (retain) NSMutableArray *items;
@property (copy) NSString *name;
@property double rating;
@property (retain) NSMutableDictionary *usageCounterPerLayer;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)detailedDescription;
- (void)addSlide:(id)a0;
- (long long)slideCount;
- (id)allSlides;
- (void)removeAllSlides;
- (void)setUsageCountForLayer:(id)a0 to:(double)a1;
- (id)usageCountDescription;
- (id)allSlidesSortedByUser;
- (BOOL)clusterContainsSlideAtPath:(id)a0;
- (id)allSlidesSortedChronologically;
- (double)usageCountForLayer:(id)a0;
- (void)resetAllUsageCounters;

@end
