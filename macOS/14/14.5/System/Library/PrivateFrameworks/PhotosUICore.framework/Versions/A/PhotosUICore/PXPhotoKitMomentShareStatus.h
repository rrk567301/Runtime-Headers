@class PXCMMMomentShareInvitation;

@interface PXPhotoKitMomentShareStatus : PXMomentShareStatus {
    PXCMMMomentShareInvitation *_invitation;
}

- (void).cxx_destruct;
- (id)invitation;
- (id)initWithPhotoKitMomentShare:(id)a0;
- (id)_createStatusProvider;
- (void)_prepareFetchResultsForPhotoLibrary:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;

@end
