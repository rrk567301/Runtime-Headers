@class NSString;

@interface PXPhotoKitMoveToLibraryActionPerformer : PXPhotoKitAssetActionPerformer <PXActionPerformerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnSubsetOfSelection;

- (void)performUserInteractionTask;
- (id)undoManagerForActionPerformer:(id)a0;
- (BOOL)shouldExitSelectModeForState:(unsigned long long)a0;

@end
