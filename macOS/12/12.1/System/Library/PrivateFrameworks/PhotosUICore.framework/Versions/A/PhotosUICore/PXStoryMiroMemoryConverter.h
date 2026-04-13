@class NSString, PHMemory;
@protocol PXDisplayAssetFetchResult, PXDisplayAsset;

@interface PXStoryMiroMemoryConverter : NSObject

@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) PHMemory *memory;
@property (readonly, nonatomic) BOOL containsAnyData;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> curatedAssets;
@property (readonly, nonatomic) NSString *flexMusicID;
@property (readonly, nonatomic) NSString *sagaMusicID;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMemory:(id)a0 keyAsset:(id)a1;
- (id)createNewRecipeFromMiroMetadataWithError:(id *)a0;
- (void)_requestSavedMetadataForMemory:(id)a0;

@end
