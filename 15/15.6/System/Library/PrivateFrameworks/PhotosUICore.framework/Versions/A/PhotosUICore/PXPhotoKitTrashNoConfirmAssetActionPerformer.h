@interface PXPhotoKitTrashNoConfirmAssetActionPerformer : PXPhotoKitTrashAssetActionPerformer

- (long long)destructivePhotosAction;
- (char)shouldSkipUserConfirmation;

@end
