@class NSString;
@protocol PXMemoryAssetsActionFactory;

@interface PXPhotoKitMoveToLibraryActionPerformer : PXPhotoKitAssetActionPerformer <PXActionPerformerDelegate>

@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;

- (id)undoManagerForActionPerformer:(id)a0;
- (void)performUserInteractionTask;
- (BOOL)shouldExitSelectModeForState:(unsigned long long)a0;

@end
