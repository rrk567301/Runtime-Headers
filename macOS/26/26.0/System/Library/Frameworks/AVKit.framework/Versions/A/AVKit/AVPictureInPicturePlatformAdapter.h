@class NSString, PIPViewController, AVPlayerControllerTimeResolver, AVPictureInPictureViewController, AVObservationController, AVPlayerController;
@protocol AVPictureInPictureContentSource, AVPictureInPicturePlatformAdapterDelegate;

@interface AVPictureInPicturePlatformAdapter : NSObject <PIPSafariViewControllerDelegate, AVPictureInPictureControlsStyleAppearance>

@property (class, readonly, nonatomic, getter=isPictureInPictureSupported) BOOL pictureInPictureSupported;
@property (class, readonly, nonatomic) NSString *stopPictureInPictureButtonImageName;
@property (class, readonly, nonatomic) NSString *startPictureInPictureButtonImageName;

@property (retain, nonatomic) PIPViewController *systemPIPViewController;
@property (retain, nonatomic) AVPlayerControllerTimeResolver *timeResolver;
@property (nonatomic) long long observedTimeControlStatus;
@property (nonatomic, getter=isScrubbingOrSeeking) BOOL scrubbingOrSeeking;
@property (nonatomic) double rateWhenScrubbingOrSeekingBegan;
@property (weak, nonatomic) id<AVPictureInPictureContentSource> source;
@property (readonly, nonatomic) AVObservationController *observationController;
@property (nonatomic) long long status;
@property (nonatomic, getter=isRoutingVideoToHostedWindow) BOOL routingVideoToHostedWindow;
@property (readonly, nonatomic, getter=isContentSourceSupported) BOOL contentSourceSupported;
@property (weak, nonatomic) id<AVPictureInPicturePlatformAdapterDelegate> delegate;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic) BOOL allowsPictureInPicturePlayback;
@property (readonly, nonatomic, getter=isSystemPictureInPicturePossible) BOOL systemPictureInPicturePossible;
@property (nonatomic) BOOL alwaysStartsAutomaticallyWhenEnteringBackground;
@property (nonatomic) BOOL canStartAutomaticallyWhenEnteringBackground;
@property (nonatomic) BOOL canPausePlaybackWhenClosingPictureInPicture;
@property (nonatomic) BOOL requiresLinearPlayback;
@property (nonatomic) long long controlsStyle;
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled;
@property (nonatomic) BOOL managesWiredSecondScreenPlayback;
@property (copy, nonatomic) NSString *activitySessionIdentifier;
@property (nonatomic) long long backgroundPlaybackPolicy;
@property (readonly, nonatomic) BOOL canAnimatePictureInPictureTransition;
@property (readonly, nonatomic) AVPictureInPictureViewController *pictureInPictureViewController;
@property (readonly, nonatomic, getter=isAnyPictureInPictureActive) BOOL anyPictureInPictureActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_updateStatus;
- (id)initWithSource:(id)a0;
- (void).cxx_destruct;
- (void)pipActionClose:(id)a0;
- (void)pipAction:(id)a0 setMicrophoneMuted:(BOOL)a1;
- (void)pipAction:(id)a0 setPlaying:(BOOL)a1;
- (void)pipAction:(id)a0 skipInterval:(double)a1;
- (void)pipActionPrerollAction:(id)a0;
- (void)pipActionRestore:(id)a0;
- (void)pipActionSkipPreroll:(id)a0;
- (void)pipActionSkipToLive:(id)a0;
- (void)_dismissPictureInPicture:(BOOL)a0;
- (long long)_proxyControlsStyle;
- (void)_setObservedTimeControlStatus:(long long)a0;
- (void)_setRoutingVideoToHostedWindow:(BOOL)a0 pictureInPictureViewController:(id)a1 source:(id)a2;
- (void)_setStatusAndNotifyDelegateIfNeeded:(long long)a0;
- (void)_updateProxyPlaybackState;
- (void)_updateStatusUsingProposedStatus:(long long)a0;
- (void)startPictureInPicture;
- (void)stopPictureInPictureAndRestoreUserInterface:(BOOL)a0;
- (void)updateLayoutDependentBehaviors;

@end
