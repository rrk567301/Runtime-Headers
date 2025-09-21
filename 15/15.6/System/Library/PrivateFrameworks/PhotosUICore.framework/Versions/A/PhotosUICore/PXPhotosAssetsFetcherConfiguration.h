@class NSPredicate, NSArray, PHAsset;

@interface PXPhotosAssetsFetcherConfiguration : NSObject <NSCopying>

@property (nonatomic) long long curationKind;
@property (nonatomic) long long curationLength;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long libraryFilter;
@property (nonatomic) long long fetchLimit;
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (copy, nonatomic) NSPredicate *inclusionPredicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (copy, nonatomic) NSArray *fetchPropertySets;
@property (nonatomic) char includeUnsavedSyndicatedAssets;
@property (nonatomic) char includeAllBurstAssets;
@property (nonatomic) char reverseSortOrder;
@property (nonatomic) char hideHiddenAssets;
@property (nonatomic) long long curationType;
@property (copy, nonatomic) NSArray *referencePersons;
@property (copy, nonatomic) PHAsset *referenceAsset;
@property (nonatomic) char includeOthersInSocialGroupAssets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
