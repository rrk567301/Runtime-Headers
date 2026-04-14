@interface VideosUI.MediaShowcaseViewController : VUIBaseViewController <VideosUI.VUICollectionViewHoverDelegate, VideosUI.VUICollectionViewVoiceOverDelegate> {
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ pageViewModels;
    void /* unknown type, empty encoding */ mediaInfoIndexOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mediaShowcaseConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundMediaController;
    void /* unknown type, empty encoding */ isPaused;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerControlsView;
    void /* unknown type, empty encoding */ initialMediaLoaded;
    void /* unknown type, empty encoding */ horizontalStackViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientLayer;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ shouldSetupTitleView;
    void /* unknown type, empty encoding */ isTabbarChild;
}

- (double)vuiCollectionViewHoverDelayDuration:(id)a0 at:(id)a1;
- (BOOL)vuiCollectionView:(id)a0 shouldHoverItemAt:(id)a1;
- (void)vuiCollectionView:(id)a0 didSelectItemByVOAt:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;
- (void)vui_viewDidAppear:(BOOL)a0;

@end
