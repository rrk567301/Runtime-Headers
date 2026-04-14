@interface VideosUI.PostPlayTemplateController : VideosUI.VUIViewController <VUIPlaybackUpNextController> {
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ contextData;
    void /* unknown type, empty encoding */ templateViewModel;
    void /* unknown type, empty encoding */ backgroundMediaInfo;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ autoPlayDuration;
    void /* unknown type, empty encoding */ autoPlayMetrics;
    void /* unknown type, empty encoding */ playbackState;
    void /* unknown type, empty encoding */ featuredContentLogo;
    void /* unknown type, empty encoding */ metadataContentHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundMediaController;
    void /* unknown type, empty encoding */ playbackUpNextDelegate;
    void /* unknown type, empty encoding */ interactionManager;
    void /* unknown type, empty encoding */ playbackTimer;
    void /* unknown type, empty encoding */ controlFadeTimer;
    void /* unknown type, empty encoding */ playbackObservers;
    void /* unknown type, empty encoding */ propertyObservers;
    void /* unknown type, empty encoding */ currentSizeClass;
    void /* unknown type, empty encoding */ trackingArea;
}

- (void)setPlaybackUpNextDelegate:(id)a0;
- (void)setPlaybackUpNextContextData:(id)a0;
- (void)startAutoPlayAnimation;
- (double)playbackUpNextViewHeight;
- (void)recordUpNextImpressions;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewDidAppear:(BOOL)a0;

@end
