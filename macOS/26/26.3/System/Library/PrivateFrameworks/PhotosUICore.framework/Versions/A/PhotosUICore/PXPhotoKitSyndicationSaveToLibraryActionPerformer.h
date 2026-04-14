@interface PXPhotoKitSyndicationSaveToLibraryActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (BOOL)providesCanPerformError;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3 error:(out id *)a4;
+ (BOOL)canPerformWithActionManager:(id)a0 error:(out id *)a1;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
