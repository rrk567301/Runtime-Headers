@class AVPictureInPicturePlatformAdapter, AVPictureInPictureControllerContentSource, NSString, NSImage, AVPictureInPictureViewController, AVPlayerLayer, AVObservationController, AVPlayerController;
@protocol AVPictureInPicturePrerollDelegate, AVPictureInPictureContentSource, AVPictureInPictureControllerExtendedDelegate, AVPictureInPictureControllerDelegate;

@interface AVPictureInPictureController : NSObject <AVPictureInPicturePlatformAdapterDelegate, AVPictureInPictureControlsStyleAppearance>

@property (class, readonly, nonatomic) NSImage *pictureInPictureButtonStartImage;
@property (class, readonly, nonatomic) NSImage *pictureInPictureButtonStopImage;

@property (readonly, nonatomic) AVPictureInPicturePlatformAdapter *platformAdapter;
@property (readonly, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) id<AVPictureInPictureContentSource> sourceIfRetainedDuringPictureInPicturePlayback;
@property (retain, nonatomic) id playerControllerIsPlayingObservationToken;
@property (nonatomic, getter=isPictureInPicturePossible) char pictureInPicturePossible;
@property (nonatomic, getter=isPictureInPictureActive) char pictureInPictureActive;
@property (nonatomic, getter=isPictureInPictureSuspended) char pictureInPictureSuspended;
@property (nonatomic, getter=isOtherPictureInPictureActive) char otherPictureInPictureActive;
@property (nonatomic, setter=_setCanStopPictureInPicture:) char canStopPictureInPicture;
@property (nonatomic) char wantsImmediateAssetInspection;
@property (nonatomic) char wasPlayingWhenPictureInPictureInterruptionBegan;
@property (weak, nonatomic) id<AVPictureInPictureControllerExtendedDelegate> _extendedDelegate;
@property (readonly, weak, nonatomic) id<AVPictureInPictureContentSource> source;
@property (readonly, nonatomic) AVPictureInPictureViewController *pictureInPictureViewController;
@property (readonly, nonatomic) char wantsResourceReduction;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic) char retainsSourceDuringPictureInPicturePlayback;
@property (nonatomic) char allowsPictureInPicturePlayback;
@property (nonatomic) char allowsPictureInPictureFromInlineWhenEnteringBackground;
@property (nonatomic) char pictureInPictureWasStartedWhenEnteringBackground;
@property (nonatomic, getter=isMicrophoneEnabled) char microphoneEnabled;
@property (nonatomic) char canStartAutomaticallyWhenEnteringBackground;
@property (nonatomic) long long backgroundPlaybackPolicy;
@property (nonatomic) char canPausePlaybackWhenClosingPictureInPicture;
@property (weak, nonatomic) id<AVPictureInPicturePrerollDelegate> prerollDelegate;
@property (retain, nonatomic) AVPictureInPictureControllerContentSource *contentSource;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (weak, nonatomic) id<AVPictureInPictureControllerDelegate> delegate;
@property (nonatomic) char requiresLinearPlayback;
@property (nonatomic) char canStartPictureInPictureAutomaticallyFromInline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long controlsStyle;

+ (char)isPictureInPictureSupported;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithSource:(id)a0;
- (void)startObservingPlayerController:(id)a0;
- (void)_commonInitWithSource:(id)a0;
- (void)_configureContentSourceForGenericViewIfNeeded:(id)a0;
- (id)_delegateIfRespondsToSelector:(SEL)a0;
- (void)_logContentSourceType:(id)a0;
- (char)_shouldPauseWhenExitingPictureInPicture;
- (void)_startObservationsForContentSource:(id)a0;
- (void)_startObservingPlayerLayerContentSource:(id)a0;
- (void)_stopPictureInPictureAndRestoreUserInterface:(char)a0;
- (void)_updateBackgroundPlaybackPolicyFromPlayerController;
- (id)activitySessionIdentifier;
- (void)contentSourceVideoRectInWindowChanged;
- (id)initWithContentSource:(id)a0;
- (id)initWithPlayerLayer:(id)a0;
- (void)invalidatePlaybackState;
- (void)pictureInPicturePlatformAdapter:(id)a0 failedToStartError:(id)a1;
- (void)pictureInPicturePlatformAdapter:(id)a0 handlePlaybackCommand:(long long)a1;
- (void)pictureInPicturePlatformAdapter:(id)a0 prepareToStopForRestoringUserInterface:(id /* block */)a1;
- (void)pictureInPicturePlatformAdapter:(id)a0 statusDidChange:(long long)a1 fromStatus:(long long)a2;
- (void)pictureInPicturePlatformAdapter:(id)a0 stopPictureInPictureAndRestoreUserInterface:(char)a1;
- (void)pictureInPicturePlatformAdapterBeginReducingResourcesForEligibleOffScreenState;
- (void)pictureInPicturePlatformAdapterEndReducingResourcesForEligibleOffScreenState;
- (void)pictureInPicturePlatformAdapterPrepareToStopForDismissal:(id)a0;
- (void)reloadPrerollAttributes;
- (id)sampleBufferDisplayLayer;
- (void)setActivitySessionIdentifier:(id)a0;
- (void)startPictureInPicture;
- (void)stopObservingPlayerController:(id)a0;
- (void)stopPictureInPicture;
- (void)stopPictureInPictureEvenWhenInBackground;

@end
