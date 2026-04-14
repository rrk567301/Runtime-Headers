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

+ (id)bannerBackgroundImage;
+ (int)bannerSortOrder;
+ (BOOL)bannerHasBottomBorder;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateBackgroundAppearance:(id)a0;
- (void)barBackground:(id)a0 mouseStateDidChange:(BOOL)a1;
- (id)bannerNibName;
- (long long)compareBanners:(id)a0;
- (void)didInstallBannerView;
- (void)didUninstallBannerView;
- (void)uninstall:(id)a0;
- (void)_recursivelyMakeTextReadable:(id)a0;
- (void)_updateBackgroundColor:(id)a0 appearance:(id)a1;
- (void)updateControlsForTitlebarColor;
- (void)willInstallBannerView;
- (void)willUninstallBannerView;
- (id)_createBannerView;
- (void)_populateBannerViewFromNib:(id)a0;
- (void)mouseStateDidChangeToState:(BOOL)a0;

@end
