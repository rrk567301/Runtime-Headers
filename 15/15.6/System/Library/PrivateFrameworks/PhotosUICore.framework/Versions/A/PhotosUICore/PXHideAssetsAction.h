@interface PXHideAssetsAction : PXAssetsAction

@property (readonly, nonatomic, getter=isHidden) char hidden;

+ (char)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (char)currentValueForAssets:(id)a0;
+ (char)toggledValueForAssets:(id)a0;

- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)initWithAssets:(id)a0;
- (id)actionNameLocalizationKey;
- (id)initWithAssets:(id)a0 hidden:(char)a1;

@end
