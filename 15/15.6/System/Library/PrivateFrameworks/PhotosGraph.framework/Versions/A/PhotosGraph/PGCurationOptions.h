@class NSSet;

@interface PGCurationOptions : NSObject <NSCopying>

@property (nonatomic) unsigned long long duration;
@property (nonatomic) char includesAllFaces;
@property (nonatomic) char focusOnPeople;
@property (nonatomic) char focusOnInterestingItems;
@property (nonatomic, getter=identicalDedupingIsEnabled) char identicalDedupingEnabled;
@property (nonatomic, getter=semanticalDedupingIsEnabled) char semanticalDedupingEnabled;
@property (nonatomic) char semanticalDedupingUsesAdaptiveSimilarStacking;
@property (nonatomic, getter=movieDedupingIsEnabled) char movieDedupingEnabled;
@property (nonatomic, getter=lastPassMovieAdditionIsEnabled) char lastPassMovieAdditionEnabled;
@property (nonatomic) char shouldSkipClustering;
@property (copy, nonatomic) NSSet *uuidsOfRequiredAssets;
@property (copy, nonatomic) NSSet *uuidsOfEligibleAssets;
@property (copy, nonatomic) NSSet *personLocalIdentifiersToFocus;
@property (nonatomic) char useDurationBasedCuration;
@property (nonatomic) char failIfMinimumDurationNotReached;
@property (nonatomic) char skipCurationIfEligibleItemsFitTargetDuration;
@property (nonatomic) double defaultDurationOfStillPhoto;
@property (nonatomic) double defaultDurationOfLivePhoto;
@property (nonatomic) double defaultDurationOfVideo;
@property (nonatomic) double minimumDuration;
@property (nonatomic) double targetDuration;
@property (nonatomic) unsigned long long minimumNumberOfItems;
@property (nonatomic) unsigned short sharingFilter;
@property (nonatomic) unsigned long long targetNumberOfItems;

+ (id)defaultOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithDuration:(unsigned long long)a0;

@end
