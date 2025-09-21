@class NSString, PIPViewController, AVPictureInPictureViewController, AVObservationController, AVPlayerController;
@protocol AVPictureInPictureContentSource, AVPictureInPicturePlatformAdapterDelegate;

@interface AVPictureInPicturePlatformAdapter : NSObject <PIPSafariViewControllerDelegate, AVPictureInPictureControlsStyleAppearance>

@property (class, readonly, nonatomic, getter=isPictureInPictureSupported) char pictureInPictureSupported;
@property (class, readonly, nonatomic) NSString *stopPictureInPictureButtonImageName;
@property (class, readonly, nonatomic) NSString *startPictureInPictureButtonImageName;

@property (retain, nonatomic) PIPViewController *systemPIPViewController;
@property (weak, nonatomic) id<AVPictureInPictureContentSource> source;
@property (readonly, nonatomic) AVObservationController *observationController;
@property (nonatomic) long long status;
@property (nonatomic, getter=isRoutingVideoToHostedWindow) char routingVideoToHostedWindow;
@property (readonly, nonatomic, getter=isContentSourceSupported) char contentSourceSupported;
@property (weak, nonatomic) id<AVPictureInPicturePlatformAdapterDelegate> delegate;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic) char allowsPictureInPicturePlayback;
@property (readonly, nonatomic, getter=isSystemPictureInPicturePossible) char systemPictureInPicturePossible;
@property (nonatomic) char alwaysStartsAutomaticallyWhenEnteringBackground;
@property (nonatomic) char canStartAutomaticallyWhenEnteringBackground;
@property (nonatomic) char canPausePlaybackWhenClosingPictureInPicture;
@property (nonatomic) char requiresLinearPlayback;
@property (nonatomic) long long controlsStyle;
@property (nonatomic, getter=isMicrophoneEnabled) char microphoneEnabled;
@property (nonatomic) char managesWiredSecondScreenPlayback;
@property (copy, nonatomic) NSString *activitySessionIdentifier;
@property (nonatomic) long long backgroundPlaybackPolicy;
@property (readonly, nonatomic) char canAnimatePictureInPictureTransition;
@property (readonly, nonatomic) AVPictureInPictureViewController *pictureInPictureViewController;
@property (readonly, nonatomic, getter=isAnyPictureInPictureActive) char anyPictureInPictureActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0;
- (void)_updateStatus;
- (char)pipShouldClose:(id)a0;
- (void)pipActionPause:(id)a0;
- (void)pipActionPlay:(id)a0;
- (void)pipActionStop:(id)a0;
- (void)pipDidClose:(id)a0;
- (void)pipWillClose:(id)a0;
- (void)_updateReplacementRectAndWindow;
- (void)_setRoutingVideoToHostedWindow:(char)a0 pictureInPictureViewController:(id)a1 source:(id)a2;
- (void)_setStatusAndNotifyDelegateIfNeeded:(long long)a0;
- (void)_unsetReplacementRect;
- (void)_updateStatusUsingProposedStatus:(long long)a0;
- (void)startPictureInPicture;
- (void)stopPictureInPictureAndRestoreUserInterface:(char)a0;
- (void)updateLayoutDependentBehaviors;

@end
