@class NSString, PXPhotosViewModel, PXCPLUIStatusProvider, PXAssetsDataSourceCountsController;
@protocol PXPhotosGridFooterStatusControllerDelegate;

@interface PXPhotosGridFooterStatusController : NSObject <PXChangeObserver> {
    PXPhotosViewModel *_viewModel;
    PXAssetsDataSourceCountsController *_countsController;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
}

@property (weak, nonatomic) id<PXPhotosGridFooterStatusControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)_createCPLUIStatusProvider;
- (void)setCplUIStatusProvider:(id)a0;
- (void)_refreshCPLUIStatusProvider;
- (void)_systemPhotoLibraryDidChange;
- (id)initWithViewModel:(id)a0 itemsCountsController:(id)a1;
- (void)_updateHasImportantInformation;
- (void)_updateFooterViewModel;

@end
