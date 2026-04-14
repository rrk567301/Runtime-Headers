@class PHAssetCollection;

@interface WFPHAssetCollectionPredicate : NSComparisonPredicate

@property (readonly, nonatomic) PHAssetCollection *assetCollection;

- (void).cxx_destruct;
- (id)wf_photoLibraryFilteringPredicate;
- (id)initForAssetsInCollection:(id)a0;

@end
