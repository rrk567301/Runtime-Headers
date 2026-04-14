@interface PLCloudPhotoLibraryHelper : NSObject

+ (void)enableCPL:(id /* block */)a0;
+ (void)disableCPL:(id /* block */)a0;
+ (BOOL)shouldSendOptimizeFeedbackOnce;
+ (void)setShouldSendOptimizeFeedbackOnce:(BOOL)a0;
+ (BOOL)shouldRepushVideoAssetsMetadataOnce;
+ (void)setShouldRepushVideoAssetsMetadataOnce:(BOOL)a0;
+ (BOOL)shouldRepushMasterWithMissingMediaMetadataOnce;
+ (void)setShouldRepushMasterWithMissingMediaMetadataOnce:(BOOL)a0;
+ (BOOL)shouldMarkPurgeableResourcesOnce;
+ (void)setShouldMarkPurgeableResourcesOnce:(BOOL)a0;
+ (BOOL)shouldClearPurgeableResourcesOnce;
+ (void)setShouldClearPurgeableResourcesOnce:(BOOL)a0;
+ (BOOL)shouldHandleOptimizeModeChange;
+ (void)setShouldHandleOptimizeModeChange:(BOOL)a0;
+ (BOOL)shouldRepushAssetsWithImportedByBundleIdentifier;
+ (void)setShouldRepushAssetsWithImportedByBundleIdentifier:(BOOL)a0;
+ (void)_donateTipsAppEnablementSignal;

@end
