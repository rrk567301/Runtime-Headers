@class NSControl;

@interface ConversationKit.LocalParticipantControlsView : NSView {
    void /* unknown type, empty encoding */ currentConstraints;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ controlsLayoutGuide;
    void /* unknown type, empty encoding */ zoomButtonLayoutGuide;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ effectsSelected;
    void /* unknown type, empty encoding */ blurEnabled;
    void /* unknown type, empty encoding */ cinematicFramingIsEnabled;
    void /* unknown type, empty encoding */ reactionEffectGestureIsEnabled;
    void /* unknown type, empty encoding */ studioLightIsEnabled;
    void /* unknown type, empty encoding */ isDisabled;
    void /* unknown type, empty encoding */ tuFeatures;
    void /* unknown type, empty encoding */ previewButtonConstraints;
    void /* unknown type, empty encoding */ _videoMessagingState;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ timerSink;
}

@property (nonatomic, readonly) NSControl *effectsButton;
@property (nonatomic, readonly) NSControl *cameraBlurButton;
@property (nonatomic, readonly) NSControl *cinematicFramingButton;
@property (nonatomic, readonly) NSControl *collapseButton;
@property (nonatomic, readonly) NSControl *rotateButton;
@property (nonatomic, readonly) NSControl *cameraFlipButton;
@property (nonatomic, readonly) NSControl *cameraFlipButtonWithText;
@property (nonatomic, readonly) NSControl *reactionEffectGestureButton;
@property (nonatomic, readonly) NSControl *studioLightButton;
@property (nonatomic, readonly) BOOL flipped;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)showCallDetails;
- (void)callBack;
- (void)handleCameraBlurTapped;
- (void)handleCameraFlipTapped;
- (void)handleCinematicFramingTapped;
- (void)handleCollapseButtonTapped;
- (void)handleEffectsTapped;
- (void)handleReactionEffectGestureTapped;
- (void)handleRotateButtonTapped;
- (void)handleShutterButtonTapped;
- (void)handleStudioLightTapped;
- (void)handleVideoMessageButtonTapped;

@end
