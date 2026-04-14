@class PHPhotoLibrary;

@interface PXPhotoKitCPLActionManager : PXCPLActionManager

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (id)init;
- (id)actionPerformerForActionType:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;

@end
