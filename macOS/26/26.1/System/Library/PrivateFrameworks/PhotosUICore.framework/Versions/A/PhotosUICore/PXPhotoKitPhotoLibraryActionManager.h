@class PHPhotoLibrary;

@interface PXPhotoKitPhotoLibraryActionManager : PXActionManager

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)a0 parameters:(id)a1;
- (id)actionTypeForGenericType:(id)a0;

@end
