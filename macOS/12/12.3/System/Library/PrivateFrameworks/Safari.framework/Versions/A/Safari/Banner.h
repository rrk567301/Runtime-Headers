@class NSString, NSView, BarBackground, NSArray;
@protocol BannerDelegate;

@interface Banner : NSObject <BarBackgroundMouseTrackingDelegate> {
    NSView *bannerContents;
    NSView *firstKeySubview;
    NSView *lastKeySubview;
    NSArray *_topLevelNibObjects;
}

@property (weak, nonatomic) id<BannerDelegate> delegate;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, retain, nonatomic) BarBackground *bannerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)bannerSortOrder;
+ (BOOL)bannerHasBottomBorder;
+ (id)bannerBackgroundImage;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_createBannerView;
- (void)_updateBackgroundColor:(id)a0 appearance:(id)a1;
- (void)_updateBackgroundAppearance:(id)a0;
- (void)_recursivelyMakeTextReadable:(id)a0;
- (void)updateControlsForTitlebarColor;
- (void)_populateBannerViewFromNib:(id)a0;
- (id)bannerNibName;
- (void)mouseStateDidChangeToState:(BOOL)a0;
- (void)barBackground:(id)a0 mouseStateDidChange:(BOOL)a1;
- (long long)compareBanners:(id)a0;
- (void)didInstallBannerView;
- (void)didUninstallBannerView;
- (void)uninstall:(id)a0;
- (void)willInstallBannerView;
- (void)willUninstallBannerView;

@end
