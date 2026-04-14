@class NSString, NSPressGestureRecognizer, AVPlayerLooper, AVQueuePlayer, SRFLockStateNotifier, SiriUIOrbView, SiriUITextInputField, AVPlayerLayer, SiriUITalkGestureTarget;
@protocol SiriUISiriStatusViewDelegate, SiriUISiriStatusViewAnimationDelegate;

@interface SiriUISiriStatusView : NSView <NSGestureRecognizerDelegate, SiriUITalkGestureTargetDelegate> {
    SiriUITalkGestureTarget *_gestureTarget;
    NSPressGestureRecognizer *_pressRecognizer;
    double _lastStateChangeTime;
    double _orbViewTargetAlpha;
    AVPlayerLayer *_orbLayer;
    AVPlayerLooper *_orbPlayerLooper;
    AVQueuePlayer *_orbQueuePlayer;
    SRFLockStateNotifier *_lockStateNotifier;
}

@property (nonatomic) long long mode;
@property (nonatomic, getter=isReduceMotionEnabled) BOOL reduceMotionEnabled;
@property (weak) SiriUITextInputField *textInputField;
@property (weak) SiriUIOrbView *orbView;
@property (nonatomic) double disabledMicOpacity;
@property (weak, nonatomic) id<SiriUISiriStatusViewDelegate> delegate;
@property (weak, nonatomic) id<SiriUISiriStatusViewAnimationDelegate> animationDelegate;
@property (readonly, nonatomic) id voiceOverJumpTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;
+ (double)statusViewHeightForWidthSizeClass:(BOOL)a0;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)awakeFromNib;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMode:(long long)a0 withAnimationCompletion:(id /* block */)a1;
- (void)forceOrbVisible:(BOOL)a0;
- (void)_siriStatusViewWasClickedFromOrbButton;
- (void)initInputMode;
- (void)_orbButtonClicked:(id)a0;
- (void)_orbButtonHeld:(id)a0;
- (void)didLockDevice:(id)a0;
- (void)didUnlockDevice:(id)a0;
- (void)updateTextInputForLockedScreen:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_orbFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_orbGlyphTappableRect;
- (void)_animateInputHidden:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)_isOrbGlyphHidden;
- (void)initOrbIfNecesary;
- (void)_updateOrbViewState;
- (void)_siriStatusViewHoldDidBegin;
- (void)_siriStatusViewHoldDidEnd;
- (void)_animateOrbGlyphHidden:(BOOL)a0 completion:(id /* block */)a1;
- (void)_animateInputHidden:(BOOL)a0;
- (void)textInputFieldAction:(id)a0;
- (void)setInputVoiceOverJumpTarget:(id)a0;

@end
