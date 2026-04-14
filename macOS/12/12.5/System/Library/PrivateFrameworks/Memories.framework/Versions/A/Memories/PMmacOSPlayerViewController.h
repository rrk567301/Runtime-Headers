@class PMMoodProvider, PMPosterViewController, PMMovieProvider, PMDurationProvider, PMSaveProvider, PMTitleSubtitleView, PHAssetCollection, AVPlayerView, NSString, PMmacOSProgressIndicatorView, VEKProduction, NSView, PMAVSynchronizedView, AVPlayer;

@interface PMmacOSPlayerViewController : NSViewController <PMMovieProviderDelegate, PMEditProviderDelegate>

@property (retain, nonatomic) VEKProduction *production;
@property (retain, nonatomic) AVPlayerView *playerView;
@property (retain, nonatomic) NSView *playerContainerView;
@property (retain, nonatomic) PMmacOSProgressIndicatorView *progressIndicatorView;
@property (retain, nonatomic) PMTitleSubtitleView *titleView;
@property (retain, nonatomic) PMTitleSubtitleView *posterTitleView;
@property (retain, nonatomic) PMAVSynchronizedView *synchronizedView;
@property (retain, nonatomic) PMPosterViewController *posterViewController;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (retain, nonatomic) PMMovieProvider *movieProvider;
@property (retain, nonatomic) PMSaveProvider *saveProvider;
@property (retain, nonatomic) PMDurationProvider *durationProvider;
@property (retain, nonatomic) PMMoodProvider *moodProvider;
@property (retain, nonatomic) AVPlayer *playerForObserving;
@property (retain, nonatomic) id playerTimeObserver;
@property (nonatomic) BOOL isFirstTime;
@property (nonatomic) BOOL downloadInProgress;
@property (nonatomic) long long initialNumberOfAssetsInMovie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLayout;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)removeObservers;
- (id)initWithAssetCollection:(id)a0;
- (void)playerItemDidReachEnd:(id)a0;
- (void)setupMenu;
- (void)editProvider:(id)a0 didChange:(BOOL)a1;
- (struct CGSize { double x0; double x1; })naturalSizeForPlayback;
- (void)progressDidChange:(double)a0 description:(id)a1 stageDescription:(id)a2;
- (void)didRefreshPlayerItem:(id)a0 downloadError:(id)a1;
- (void)resultWasUpdated:(id)a0;
- (void)constrainView:(id)a0 toSuperviewWithBleed:(double)a1;
- (void)setupPosterView;
- (void)setupTitleView;
- (void)moodChanged:(id)a0;
- (void)durationChanged:(id)a0;
- (void)updateSelectedMenuItemStatus;
- (void)addObserversWithPlayer:(id)a0;
- (void)signalScheduling:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)enablePlayerViewControls;
- (void)disablePlayerViewControls;
- (void)removePosterView;

@end
