@interface PXPhotoKitMomentShareStatus : PXMomentShareStatus

- (id)owner;
- (id)_actionManager;
- (id)initWithPhotoKitMomentShare:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (void)_prepareFetchResultsForPhotoLibrary:(id)a0;

@end
