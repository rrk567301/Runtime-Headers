@class NSString, PXPhotosViewModel, PXCPLPhotoLibrarySource, PXCPLUIStatusProvider, PXAssetsDataSourceCountsController;
@protocol PXPhotosGridFooterStatusControllerDelegate;

@interface PXPhotosGridFooterStatusController : NSObject <PXChangeObserver> {
    PXPhotosViewModel *_viewModel;
    PXAssetsDataSourceCountsController *_countsController;
    PXCPLPhotoLibrarySource *_photoLibrarySource;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    Class _cplActionManagerClass;
}

@property (weak, nonatomic) id<PXPhotosGridFooterStatusControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)_assetCollectionFromViewModel:(id)a0;
- (id)_photoLibraryFromViewModel:(id)a0;
- (void)_updateFooterIfNeededWithReason:(id)a0;
- (void)_updateFooterViewModelWithReason:(id)a0;
- (void)_updateHasImportantInformation;
- (id)initWithViewModel:(id)a0 itemsCountsController:(id)a1;

@end
