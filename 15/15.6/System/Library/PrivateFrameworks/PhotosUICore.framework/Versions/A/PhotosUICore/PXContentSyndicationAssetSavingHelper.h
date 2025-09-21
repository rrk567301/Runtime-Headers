@protocol PXDisplayAssetCollection, PXPresentationEnvironment;

@interface PXContentSyndicationAssetSavingHelper : NSObject

@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (nonatomic) char userCanContinueAfterSavingSyndicatedAssets;
@property (nonatomic) char allowSkippingUnsavedAssets;
@property (nonatomic) char skipUserPromptForSavingAssets;
@property (retain, nonatomic) id<PXPresentationEnvironment> presentationEnvironment;

+ (id)assetSavingHelperFromAssetCollectionActionPerformer:(id)a0;

- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;
- (void)_handleAlertResponseForUnsavedSyndicatedAssets:(id)a0 helperResult:(unsigned long long)a1 error:(id)a2 completionHandler:(id /* block */)a3;
- (void)performSaveActionIfNeededOnUnsavedSyndicatedAssetsWithCompletion:(id /* block */)a0;
- (void)presentSaveAlertForUnsavedSyndicatedAssets:(id)a0 canContinueAfterSaving:(char)a1 allowSkippingUnsavedAssets:(char)a2 withCompletion:(id /* block */)a3;
- (void)saveUnsavedSyndicatedAssetsWithCompletion:(id /* block */)a0;

@end
