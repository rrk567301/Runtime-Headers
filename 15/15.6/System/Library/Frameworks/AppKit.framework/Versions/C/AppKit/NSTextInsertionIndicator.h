@class TUIGlowEffect, NSString, NSTrailingGlow, CAShapeLayer, CALayer, NSColor, NSMutableArray, CAAnimation;

@interface NSTextInsertionIndicator : NSView <CAAnimationDelegate, NSTrailingGlowDelegate> {
    NSColor *_color;
    long long _displayMode;
    long long _currentState;
    unsigned long long _substate;
    CALayer *_glowContainer;
    CAShapeLayer *_glowLayer;
    CALayer *_indicatorLayer;
    TUIGlowEffect *_glowEffect;
    NSTrailingGlow *_pendingTrailingGlow;
    NSMutableArray *_animatingTrailingGlows;
    struct __CFRunLoopTimer { } *_waitTimer;
    struct __CFRunLoopObserver { } *_trackingLoopObserver;
    CAAnimation *_currentAnimation;
    unsigned int _animationCount;
    char _isMoving;
    char _isDictating;
    char _isTracking;
    char _blinkState;
    char _disableBlinking;
    char _showsGlow;
}

@property long long displayMode;
@property (copy) NSColor *color;
@property long long automaticModeOptions;
@property (copy) id /* block */ effectsViewInserter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)clipsToBounds;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addTrailingGlow;
- (void)cancelWaitTimer;
- (void)animationDidStop:(id)a0 finished:(char)a1;
- (char)canUpdateState;
- (id)currentTrailingGlow;
- (void)dictationStateDidChange:(id)a0;
- (void)didEnterRunLoopMode:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })indicatorRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeTrailingGlow:(id)a0;
- (void)removeTrailingGlows;
- (void)restartWaitTimer;
- (void)setCurrentAnimation:(id)a0;
- (void)setDisableBlinking:(char)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMoving:(char)a0;
- (void)setShowsGlow:(char)a0;
- (void)trailingGlowDidStartAnimation:(id)a0;
- (void)trailingGlowDidStopAnimation:(id)a0;
- (void)updateCurrentState;
- (void)updateIndicatorFrame;
- (void)updateLayer;
- (void)updateSubstate;
- (void)viewDidMoveToWindow;
- (void)waitForDictation:(char)a0;
- (void)waitForTyping;
- (char)wantsUpdateLayer;

@end
