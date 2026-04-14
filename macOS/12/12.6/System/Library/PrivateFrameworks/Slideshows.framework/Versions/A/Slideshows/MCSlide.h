@class MCPlugSlide, MCSong, NSArray, MCAssetVideo, NSSet, NSString, MCContainerEffect, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface MCSlide : MCObject <MCAnimationPathSupport, MCFilterSupport> {
    id *mSlideAsset;
    NSMutableDictionary *mFrameAttributes;
    NSMutableSet *mAnimationPaths;
    NSMutableSet *mFilters;
    NSArray *mCachedOrderedFilters;
    unsigned long long mFlags;
}

@property (readonly) NSSet *animationPaths;
@property (readonly) unsigned long long countOfAnimationPaths;
@property (readonly) NSSet *filters;
@property (readonly) NSArray *orderedFilters;
@property (readonly, nonatomic) unsigned long long countOfFilters;
@property MCContainerEffect *container;
@property (nonatomic) unsigned long long index;
@property (retain) MCAssetVideo *asset;
@property (retain) MCPlugSlide *plug;
@property (readonly) MCSong *song;
@property (nonatomic) float audioVolume;
@property (nonatomic) double audioFadeInDuration;
@property (nonatomic) double audioFadeOutDuration;
@property (nonatomic) float audioDuckLevel;
@property (nonatomic) double audioDuckInDuration;
@property (nonatomic) double audioDuckOutDuration;
@property (readonly) BOOL startTimeIsDefined;
@property (nonatomic) double startTime;
@property (readonly) BOOL durationIsDefined;
@property (nonatomic) double duration;
@property (copy) NSString *frameID;
@property (copy) NSDictionary *frameAttributes;
@property (copy) NSString *kenBurnsType;
@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) double scale;
@property (nonatomic) double rotation;
@property (nonatomic) unsigned char currentLayoutIndex;
@property (readonly) unsigned char countOfLayouts;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)filterAtIndex:(unsigned long long)a0;
- (id)xmlElement;
- (id)imprint;
- (void)removeAllFilters;
- (id)animationPathForKey:(id)a0;
- (void)removeAnimationPathForKey:(id)a0;
- (void)addAnimationPath:(id)a0;
- (void)removeAllAnimationPaths;
- (void)demolish;
- (id)insertFilterWithFilterID:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeFiltersAtIndices:(id)a0;
- (void)moveFiltersAtIndices:(id)a0 toIndex:(unsigned long long)a1;
- (id)addFilterWithFilterID:(id)a0;
- (void)setFrameAttribute:(id)a0 forKey:(id)a1;
- (id)frameAttributeForKey:(id)a0;
- (void)undefineStartTime;
- (void)undefineDuration;
- (void)_copySelfToSnapshot:(id)a0;
- (void)initAnimationPathsWithImprints:(id)a0;
- (void)demolishAnimationPaths;
- (id)imprintsForAnimationPaths;
- (void)addAnimationPathsToXMLElement:(id)a0;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (void)initFiltersWithImprints:(id)a0;
- (void)demolishFilters;
- (id)imprintsForFilters;
- (void)setSongForAsset:(id)a0;
- (void)observeFilter:(id)a0;
- (void)unobserveFilter:(id)a0;
- (void)addFiltersToXMLElement:(id)a0;

@end
