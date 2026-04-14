@class NSString;

@interface PXPhotoKitDestructiveActionPerformer : PXPhotoKitAssetActionPerformer <PXPhotoKitDeletePhotosActionControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canExpungeAsset:(id)a0 inAssetCollection:(id)a1;

- (BOOL)isCancellable;
- (void)performUserInteractionTask;
- (long long)destructivePhotosAction;

@end
