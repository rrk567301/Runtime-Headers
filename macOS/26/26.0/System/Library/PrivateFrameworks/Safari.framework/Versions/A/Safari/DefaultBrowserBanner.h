@class NSImageView, NSTextField, NSString, RolloverImageButton, NSButton;
@protocol DefaultBrowserBannerDelegate;

@interface DefaultBrowserBanner : Banner <StartPageFeatureAvailabilityImportBrowserDataCollectionViewItemDelegate> {
    unsigned long long _availableDataTypes;
}

@property (weak, nonatomic) NSTextField *promptLabel;
@property (weak, nonatomic) NSButton *setAsDefaultButton;
@property (weak, nonatomic) NSImageView *safariIcon;
@property (weak, nonatomic) NSTextField *bannerSubheading;
@property (weak, nonatomic) RolloverImageButton *closeButton;
@property (weak, nonatomic) id<DefaultBrowserBannerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)bannerSortOrder;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)_dismissDefaultBrowserBanner:(id)a0;
- (void)_presentSetDefaultBrowserSheetWithOldBrowserBundle:(id)a0;
- (void)_setSafariAsDefaultBrowser:(id)a0;
- (id)bannerNibName;
- (void)didInstallBannerView;
- (void)didUninstallBannerView;
- (void)startPageFeatureAvailabilityImportBrowserDataCollectionViewItemDidClose:(id)a0;

@end
