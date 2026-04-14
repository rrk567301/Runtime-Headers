@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface MPCluster : NSObject {
    NSMutableSet *mPathsInCluster;
}

@property (retain) NSMutableArray *items;
@property (copy) NSString *name;
@property double rating;
@property (retain) NSMutableDictionary *usageCounterPerLayer;

- (void)detailedDescription;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)addSlide:(id)a0;
- (long long)slideCount;
- (void)removeAllSlides;
- (id)allSlides;
- (id)allSlidesSortedByUser;
- (id)allSlidesSortedChronologically;
- (BOOL)clusterContainsSlideAtPath:(id)a0;
- (void)resetAllUsageCounters;
- (void)setUsageCountForLayer:(id)a0 to:(double)a1;
- (id)usageCountDescription;
- (double)usageCountForLayer:(id)a0;

@end
