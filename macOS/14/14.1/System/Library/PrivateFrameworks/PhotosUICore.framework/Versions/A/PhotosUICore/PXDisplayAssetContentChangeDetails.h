@protocol PXDisplayAsset;

@interface PXDisplayAssetContentChangeDetails : NSObject

@property (readonly, nonatomic) id<PXDisplayAsset> previousAsset;
@property (readonly, nonatomic) id<PXDisplayAsset> currentAsset;
@property (readonly, nonatomic) unsigned long long contentChanges;

+ (id)changeDetailsFromPreviousAsset:(id)a0 toCurrentAsset:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPreviousAsset:(id)a0 currentAsset:(id)a1 contentChanges:(unsigned long long)a2;

@end
