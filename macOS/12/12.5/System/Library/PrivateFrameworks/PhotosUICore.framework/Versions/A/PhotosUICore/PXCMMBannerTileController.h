@class PXMomentShareStatusPresentation, NSString, PXPeopleSuggestionsDataSourceManager, PXCMMViewModel, NSArray, PXCMMPosterBannerView;
@protocol PXCMMBannerTileControllerDelegate, PXAssetImportStatusManager;

@interface PXCMMBannerTileController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXReusableObject> {
    unsigned long long _activityType;
    unsigned long long _sourceType;
    PXCMMViewModel *_viewModel;
    id<PXAssetImportStatusManager> _importStatusManager;
    NSArray *_localizedNames;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
}

@property (retain, nonatomic) PXCMMPosterBannerView *bannerView;
@property (retain, nonatomic) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (weak, nonatomic) id<PXCMMBannerTileControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)becomeReusable;
- (void)_updatePeopleSuggestionNames;
- (void)_configureBannerViewActionButtonWithTitle:(id)a0;
- (void)_updateLocalizedNamesByViewModel;
- (void)_updateCounts;
- (void)_updateBannerActionButton;
- (void)_updateLoadingPeopleSuggestions;
- (void)_updateContainsUnverifierPersons;
- (id)initWithActivityType:(unsigned long long)a0 sourceType:(unsigned long long)a1 viewModel:(id)a2 momentShareStatusPresentation:(id)a3 importStatusManager:(id)a4;

@end
