@class NSMutableArray, NSMutableIndexSet;

@interface MPWeighter : NSObject {
    long long _totalWeight;
    NSMutableArray *_weights;
    NSMutableArray *_items;
    NSMutableArray *_constraints;
    NSMutableArray *_usageCount;
    NSMutableIndexSet *_ignoreIndices;
    BOOL _evenlyPickByID;
    BOOL _ignorePanoramas;
}

- (void)dealloc;
- (id)init;
- (long long)count;
- (id)allItems;
- (void)clearAllItems;
- (void)addItem:(id)a0 withWeight:(long long)a1 andContraints:(id)a2;
- (long long)getRandomIndex;
- (void)addIndexToIgnore:(long long)a0;
- (void)ignoreIndices:(id)a0;
- (id)imageCounts;
- (void)setEvenlyPickByID:(BOOL)a0;
- (void)ignoreIndex:(long long)a0;
- (id)constraintsForItem:(id)a0;
- (void)clearIgnoreIndices;
- (long long)getRandomIndexMeetingContraints:(id)a0;
- (long long)getRandomIndexWithNoPanoramasForImageCount:(long long)a0;
- (id)allConstraints;
- (id)ignoredIndices;
- (long long)getRandomIndexInSubset:(id)a0;
- (long long)numberOfItemsWithImageCount:(long long)a0;
- (BOOL)itemAtIndex:(long long)a0 meetsContraints:(id)a1;
- (id)indicesMeetingConstraints:(id)a0;
- (void)increaseUsageCountOfObjectAtIndex:(long long)a0;
- (id)indicesEqualingConstraints:(id)a0;
- (void)setIgnorePanoramas:(BOOL)a0;
- (id)getRandomItemMeetingNumberOfFaceLandscapes:(long long)a0 facePortraits:(long long)a1 imageLandscapes:(long long)a2 imagePortraits:(long long)a3 vPanoramas:(long long)a4 hPanoramas:(long long)a5 movies:(long long)a6 fitsInExtraWide:(long long)a7 aspectRatios:(id)a8 previousTags:(id)a9;
- (long long)getRandomIndexMeetingContraints:(id)a0 oneMatch:(BOOL)a1;
- (id)allUsageCounts;
- (BOOL)itemAtIndex:(long long)a0 meetsContraints:(id)a1 oneMatch:(BOOL)a2;
- (long long)getRandomIndexInSubset:(id)a0 withPreviousTags:(id)a1;

@end
