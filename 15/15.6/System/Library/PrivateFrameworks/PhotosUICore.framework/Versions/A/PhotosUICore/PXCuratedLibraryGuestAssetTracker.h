@class NSString, PXCuratedLibraryLayout, PXCuratedLibraryViewModel;
@protocol PXCuratedLibraryGuestAssetTrackerDelegate;

@interface PXCuratedLibraryGuestAssetTracker : NSObject <PXChangeObserver> {
    unsigned long long _numberOfGuestAssetsVisible;
    PXCuratedLibraryViewModel *_viewModel;
    PXCuratedLibraryLayout *_layout;
}

@property (weak, nonatomic) id<PXCuratedLibraryGuestAssetTrackerDelegate> delegate;
@property (nonatomic) char isActive;
@property (readonly, nonatomic) char canDisplayGuestAssets;
@property (readonly, nonatomic) char isDisplayingGuestAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (char)_checkForGuestAssetsVisible;
- (void)_checkForVisibilityUpdates;
- (char)_isViewSettled;
- (id)initWithViewModel:(id)a0 layout:(id)a1;
- (void)setCanDisplayGuestAssets:(char)a0;
- (void)setIsDisplayingGuestAssets:(char)a0;

@end
