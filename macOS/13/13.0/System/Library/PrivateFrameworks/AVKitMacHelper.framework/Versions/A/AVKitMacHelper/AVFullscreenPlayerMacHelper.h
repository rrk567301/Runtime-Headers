@class AVDesktopPlaybackControlsController, AVFullscreenTransitionConfigurationMacHelper, AVFloatingPlaybackControlsViewController, NSDictionary, AVObservationController, AVDetachedFullscreenController, AVPlaybackSpeedCollection, AVDesktopPlaybackContentContainerView, NSString, AVPlayerController, AVDesktopPlayerLayerView, AVDesktopPlayerViewContentView, AVUIViewHostMacHelper;
@protocol AVRoutePickerViewMacHelper, AVCatalystWindowProxy, AVFullscreenPlayerMacHelperDelegate;

@interface AVFullscreenPlayerMacHelper : NSObject <AVFullscreenPlayerMacHelper, AVDetachedFullscreenControllerDelegate, AVVolumeControlButtonDelegate> {
    AVObservationController *_observationController;
    AVFullscreenPlayerMacHelper *_strongSelfRetain;
}

@property (nonatomic, getter=isPresented) BOOL presented;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (retain, nonatomic) AVFullscreenTransitionConfigurationMacHelper *activeTransitionConfiguration;
@property (readonly, nonatomic) AVDetachedFullscreenController *fullscreenController;
@property (readonly, nonatomic) AVDesktopPlaybackControlsController *playbackControlsController;
@property (readonly, nonatomic) AVDesktopPlayerViewContentView *contentView;
@property (readonly, nonatomic) AVDesktopPlaybackContentContainerView *playbackContentContainerView;
@property (readonly, nonatomic) AVDesktopPlayerLayerView *playerLayerView;
@property (readonly, nonatomic) AVFloatingPlaybackControlsViewController *controlsViewController;
@property (readonly, weak, nonatomic) id<AVFullscreenPlayerMacHelperDelegate> delegate;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection;
@property (nonatomic) BOOL showsPlaybackControls;
@property (retain, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoBounds;
@property (nonatomic) BOOL requiresLinearPlayback;
@property (retain, nonatomic) AVUIViewHostMacHelper *contentOverlayViewHost;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property (retain, nonatomic) id<AVCatalystWindowProxy> sourceWindowProxy;
@property (nonatomic) BOOL hidesSourceWindowWhileInFullscreen;
@property (retain, nonatomic) id<AVRoutePickerViewMacHelper> routePickerViewMacHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingPlaybackContentContainerView;
+ (id)keyPathsForValuesAffectingPlayerLayerView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)dismiss:(id)a0;
- (void)fullscreenController:(id)a0 restoreUserInterfaceForFullScreenExitWithCompletionHandler:(id /* block */)a1;
- (void)fullscreenController:(id)a0 didEnterFullscreenWithTransitionContext:(id)a1;
- (void)fullscreenController:(id)a0 willExitFullscreenWithTransitionContext:(id)a1;
- (void)fullscreenController:(id)a0 willEnterFullscreenWithTransitionContext:(id)a1;
- (void)fullscreenControllerWillHideFullscreenWindow:(id)a0;
- (void)fullscreenControllerDidShowFullscreenWindow:(id)a0;
- (void)fullscreenController:(id)a0 didExitFullscreenWithTransitionContext:(id)a1;
- (id)fullscreenController:(id)a0 transitionInfoForProposedTransitionType:(unsigned long long)a1;
- (void)volumeControlViewDidChangeVolume:(id)a0;
- (void)volumeControlViewDidChangeMutedState:(id)a0;
- (id)volumeControlButton:(id)a0 viewContainingVolumeSlider:(id)a1;
- (void)setPlaybackRateCollection:(id)a0;
- (void)_updateControlsVisibilityPolicyIfNeeded;
- (void)present:(id)a0;
- (void)_setUpContentOverlayViewHostIfNeeded;
- (void)_setUpFullscreenControllerIfNeeded;
- (void)_setUpPlaybackContentViewIfNeeded;
- (void)_setUpPlaybackControlsIfNeeded;
- (void)_updateSelfRetain;
- (void)_updateShowsSkipButtons;

@end
