@interface PLCloudPhotoLibraryHelper : NSObject

+ (void)_donateTipsAppEnablementSignal;
+ (void)disableCPL:(id /* block */)a0;
+ (void)enableCPL:(id /* block */)a0;
+ (void)setShouldClearPurgeableResourcesOnce:(BOOL)a0;
+ (void)setShouldHandleOptimizeModeChange:(BOOL)a0;
+ (void)setShouldMarkPurgeableResourcesOnce:(BOOL)a0;
+ (void)setShouldRepushAssetsWithImportedByBundleIdentifier:(BOOL)a0;
+ (void)setShouldRepushMasterWithMissingMediaMetadataOnce:(BOOL)a0;
+ (void)setShouldRepushVideoAssetsMetadataOnce:(BOOL)a0;
+ (void)setShouldSendOptimizeFeedbackOnce:(BOOL)a0;
+ (BOOL)shouldClearPurgeableResourcesOnce;
+ (BOOL)shouldHandleOptimizeModeChange;
+ (BOOL)shouldMarkPurgeableResourcesOnce;
+ (BOOL)shouldRepushAssetsWithImportedByBundleIdentifier;
+ (BOOL)shouldRepushMasterWithMissingMediaMetadataOnce;
+ (BOOL)shouldRepushVideoAssetsMetadataOnce;
+ (BOOL)shouldSendOptimizeFeedbackOnce;

@end
