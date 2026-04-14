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
- (long long)slideCount;
- (void)addSlide:(id)a0;
- (void)removeAllSlides;
- (id)allSlides;
- (id)allSlidesSortedByUser;
- (BOOL)clusterContainsSlideAtPath:(id)a0;
- (id)allSlidesSortedChronologically;
- (void)setUsageCountForLayer:(id)a0 to:(double)a1;
- (double)usageCountForLayer:(id)a0;
- (void)resetAllUsageCounters;
- (id)usageCountDescription;

@end
