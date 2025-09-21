@interface PHPhotoLibraryFeatureAvailability : NSObject

@property (readonly, nonatomic) unsigned long long feature;
@property (nonatomic) double fractionOfAssetsWithSceneAnalysis;
@property (nonatomic) double fractionOfAssetsWithFaceAnalysis;
@property (nonatomic) double fractionOfAssetsWithEmbeddings;
@property (nonatomic) double fractionOfAssetsWithCaptions;
@property (nonatomic) double fractionOfAssetsWithScenesInIndex;
@property (nonatomic) double fractionOfAssetsWithFacesInIndex;
@property (nonatomic) double fractionOfAssetsWithEmbeddingsInIndex;
@property (nonatomic) double fractionOfStillAssetsWithEmbeddings;
@property (nonatomic) double fractionOfStillAssetsWithCaptions;
@property (nonatomic) double fractionOfStillAssetsWithEmbeddingsInIndex;
@property (nonatomic) char stillAssetEmbeddingsAreIndexedEnough;
@property (nonatomic) double fractionOfCuratedAssetsWithEmbeddings;
@property (nonatomic) double fractionOfCuratedAssetsWithCaptions;
@property (nonatomic) double fractionOfCuratedAssetsWithEmbeddingsInIndex;
@property (nonatomic) double fractionOfHighlightsEnriched;
@property (nonatomic) char photosKnowledgeGraphIsReady;
@property (nonatomic) unsigned long long numberOfCuratedAssets;
@property (nonatomic) char libraryHasEnoughCuratedAssets;
@property (nonatomic) long long featureAvailability;

- (id)debugDescription;
- (char)isEqual:(id)a0;
- (id)initWithFeature:(unsigned long long)a0;

@end
