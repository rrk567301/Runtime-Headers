@class NSString, SiriSharedUINotificationCenterPlatterView, NSPressGestureRecognizer, AVPlayerLooper, AVQueuePlayer, SRFLockStateNotifier, NSMutableArray, SiriUIOrbView, SiriUITextInputField, SiriUITalkGestureTarget, NSLayoutConstraint;
@protocol SiriUISiriStatusViewDelegate, SiriUISiriStatusViewAnimationDelegate;

@interface SiriUISiriStatusView : NSView <NSGestureRecognizerDelegate, SiriUITalkGestureTargetDelegate, SiriSharedUIStackableContentActionHandling> {
    SiriUITalkGestureTarget *_gestureTarget;
    NSPressGestureRecognizer *_pressRecognizer;
    double _lastStateChangeTime;
    double _orbViewTargetAlpha;
    AVPlayerLooper *_orbPlayerLooper;
    AVQueuePlayer *_orbQueuePlayer;
    SRFLockStateNotifier *_lockStateNotifier;
}

@property (nonatomic) long long mode;
@property (nonatomic) long long orbLocation;
@property (nonatomic, getter=isReduceMotionEnabled) BOOL reduceMotionEnabled;
@property (nonatomic, getter=isGestureTargetConstraintsSet) BOOL gestureTargetConstraintsSet;
@property (retain) NSMutableArray *orbViewConstraints;
@property (retain, nonatomic) SiriSharedUINotificationCenterPlatterView *platterView;
@property (weak) NSLayoutConstraint *heightConstraint;
@property (weak) SiriUITextInputField *textInputField;
@property (weak) SiriUIOrbView *orbView;
@property (weak) NSLayoutConstraint *orbViewCenterConstraint;
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
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)isFlipped;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_animateInputHidden:(BOOL)a0 completion:(id /* block */)a1;
- (void)_orbButtonHeld:(id)a0;
- (void)updateTextInputForLockedScreen:(BOOL)a0;
- (void)_animateInputHidden:(BOOL)a0;
- (void)_animateOrbGlyphHidden:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)_isOrbGlyphHidden;
- (void)_orbButtonClicked:(id)a0;
- (void)_setupGestureTarget;
- (void)_siriStatusViewHoldDidBegin;
- (void)_siriStatusViewHoldDidEnd;
- (void)_siriStatusViewWasClickedFromOrbButton;
- (void)_updateOrbViewConstraintsForLocation:(long long)a0;
- (void)_updateOrbViewState;
- (void)animateOrbToLocation:(long long)a0;
- (void)didLockDevice:(id)a0;
- (void)didUnlockDevice:(id)a0;
- (BOOL)eligibleToOfferDismissal;
- (void)forceOrbVisible:(BOOL)a0;
- (void)handleDismissalAction;
- (void)initInputMode;
- (void)initOrbIfNecesary;
- (void)prepareForPresentation;
- (void)setInputVoiceOverJumpTarget:(id)a0;
- (void)setMode:(long long)a0 withAnimationCompletion:(id /* block */)a1;
- (void)setOffersDismissal:(BOOL)a0;
- (void)textInputFieldAction:(id)a0;

@end
