@class NSArray, TVPPlayer, VUIMediaInfo;

@interface VideosUI.PaginatedMediaController : VUIBaseViewController <VUIBackgroundMediaPlayback> {
    void /* unknown type, empty encoding */ showsGradient;
    void /* unknown type, empty encoding */ showsPageControl;
    void /* unknown type, empty encoding */ metadataInsets;
    void /* unknown type, empty encoding */ isChevronInteractionEnabled;
    void /* unknown type, empty encoding */ viewModels;
    void /* unknown type, empty encoding */ paginationDelegate;
    void /* unknown type, empty encoding */ lastImpressedIndex;
    void /* unknown type, empty encoding */ carouselBehaviorEnabled;
    void /* unknown type, empty encoding */ backgroundMediaInfo;
    void /* unknown type, empty encoding */ backgroundMediaController;
    void /* unknown type, empty encoding */ paginationHost;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previousIndicator;
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nextIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mediaShowcaseConfig;
    void /* unknown type, empty encoding */ chevronDebounceTimer;
    void /* unknown type, empty encoding */ swipeController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_metadataInteractor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_metadataPresenter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_metadataView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_buttonsPresenter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_buttonsView;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ isAutoAdvanceEnabled;
    void /* unknown type, empty encoding */ autoAdvancePageTimer;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ showsIndicators;
    void /* unknown type, empty encoding */ _metadataViewTopOffsetStream;
    void /* unknown type, empty encoding */ metadataContentHeightObserver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_layout;
    void /* unknown type, empty encoding */ isCurrentMetadataLoadedObserver;
    void /* unknown type, empty encoding */ isPlayingVideo;
}

@property (nonatomic, retain) TVPPlayer *player;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, copy) NSArray *mediaInfos;
@property (nonatomic, readonly) VUIMediaInfo *currentMediaInfo;
@property (nonatomic) unsigned long long mediaInfoIndex;
@property (nonatomic) BOOL playbackEnabled;
@property (nonatomic, readonly) BOOL foreground;
@property (nonatomic) BOOL stopPlayerWhenViewDisappears;
@property (nonatomic) BOOL stopPlayerWhenExitingFullScreen;
@property (nonatomic) BOOL clearPreviousImageBeforeLoading;
@property (nonatomic) double playbackStartDelay;
@property (nonatomic) BOOL animateImageChange;
@property (nonatomic) unsigned long long imageContentMode;
@property (nonatomic) unsigned long long imageSwappingAnimationType;
@property (nonatomic) BOOL showsPlaybackControlsInForeground;

- (void)pause;
- (void)stop;
- (void)play;
- (BOOL)isForeground;
- (id)notificationObject;
- (void)appendMediaInfos:(id)a0;
- (void)removeMediaInfoAtIndex:(unsigned long long)a0;
- (void)setMediaInfos:(id)a0 animated:(BOOL)a1;
- (void)setMediaInfo:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (BOOL)isPlaybackEnabled;
- (BOOL)shouldStopPlayerWhenViewDisappears;
- (BOOL)shouldStopPlayerWhenExitingFullScreen;
- (void)handlePageControlChanged;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;
- (void)transitionToForeground:(BOOL)a0 animated:(BOOL)a1;
- (void)transitionToForeground:(BOOL)a0 withPlaybackControls:(BOOL)a1 animated:(BOOL)a2;
- (void)setControlsVisible:(BOOL)a0;
- (void)mediaControllerTapped:(id)a0;

@end
