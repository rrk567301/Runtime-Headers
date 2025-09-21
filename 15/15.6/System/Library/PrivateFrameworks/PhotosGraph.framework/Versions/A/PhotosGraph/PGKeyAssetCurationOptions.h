@class NSSet, CLLocation, PHAsset, PGCurationCriteria;

@interface PGKeyAssetCurationOptions : NSObject <NSCopying>

@property (retain, nonatomic) CLLocation *referenceLocation;
@property (retain, nonatomic) NSSet *referencePersonLocalIdentifiers;
@property (nonatomic) unsigned long long minimumNumberOfReferencePersons;
@property (nonatomic) char complete;
@property (nonatomic) char focusOnPeople;
@property (nonatomic) char allowContextualTrip;
@property (nonatomic) char useSummarizer;
@property (nonatomic) char prefilterAssetsWithFaces;
@property (nonatomic) double prefilterAssetsWithFacesThreshold;
@property (nonatomic) char useContextualCurationOnly;
@property (nonatomic) char promoteAutoplayableItems;
@property (nonatomic) char isForMemories;
@property (nonatomic) char allowGuestAsset;
@property (nonatomic) char wantsGoodSquareCropScore;
@property (nonatomic) char useIconicScore;
@property (nonatomic) char avoidPromotingAutoplayableItemsWhenUsingIconicScore;
@property (readonly, nonatomic) PHAsset *referenceAsset;
@property (retain, nonatomic) PGCurationCriteria *curationCriteria;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithReferenceAsset:(id)a0;

@end
