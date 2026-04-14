@class NSMutableArray, NSString, AVPlayerLayer, AVPlayerControllerTimeResolver, AVFunctionBarScrubberInternal, AVFunctionBarTrackViewController;
@protocol AVFunctionBarTrackControlling, AVFunctionBarScrubberControlling, AVTimeControlling;

@interface AVFunctionBarScrubberController : NSViewController <AVFunctionBarScrubberDelegateInternal> {
    AVFunctionBarTrackViewController *_functionBarTrackViewController;
    NSMutableArray *_bindings;
    id _scrubberBoundsObserver;
    long long _previousAssetPreviewRequest;
    double _previousAssetPreviewRequestDuration;
    double _previousAssetPreviewRequestMinTime;
    double _previousAssetPreviewRequestMaxTime;
    BOOL _isVisible;
    id _applicationWillBecomeActiveObserverToken;
    id _applicationDidResignActiveObserverToken;
}

@property (retain) AVPlayerControllerTimeResolver *timeResolver;
@property (retain, nonatomic) id<AVFunctionBarScrubberControlling, AVFunctionBarTrackControlling, AVTimeControlling> playerController;
@property (readonly, nonatomic) AVFunctionBarScrubberInternal *scrubber;
@property BOOL hasRoundedCorners;
@property (retain, nonatomic) AVPlayerLayer *scrubPlayerLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)bindObject:(id)a0 withBinding:(id)a1 toObject:(id)a2 withKeyPath:(id)a3 options:(id)a4;
- (void)unbindAllObjects;
- (BOOL)willStartTrackingForFunctionBarScrubber:(id)a0;
- (void)didStopTrackingForFunctionBarScrubber:(id)a0;
- (void)reloadThumbailsOrAudioAmplitudeSamples;
- (void)_startOrStopUpdatingPlayheadApplicationIsActive:(BOOL)a0;
- (void)_reloadThumbnailsForVideoTrackView:(id)a0;
- (void)unbindObject:(id)a0;
- (void)_reloadThumbailsOrAudioAmplitudeSamplesIfNeeded;
- (void)_reloadAudioAmplitudeSamplesForAudioTrackView:(id)a0;
- (void)_cancelThumbnailAndAudioAmplitudeSampleGeneration;

@end
