@class NSImageView, NSString, CAShapeLayer, NSPressGestureRecognizer, LPAudioPlayButtonTheme, LPAudioPlayButtonStyle, NSView;

@interface LPPlayButtonControl : NSControl <NSAccessibilityButton, NSGestureRecognizerDelegate, LPComponentMediaPlayable> {
    LPAudioPlayButtonStyle *_style;
    LPAudioPlayButtonTheme *_theme;
    CAShapeLayer *_borderLayer;
    CAShapeLayer *_innerProgressLayer;
    CAShapeLayer *_outerProgressLayer;
    CAShapeLayer *_highlightLayer;
    NSPressGestureRecognizer *_highlightRecognizer;
    NSView *_backgroundView;
    BOOL _showingProgress;
    BOOL _isPlaying;
}

@property (retain, nonatomic) NSImageView *imageView;
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (nonatomic) float progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)accessibilityLabel;
- (void)_didScroll;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)playable;
- (void)_highlightLongPressRecognized:(id)a0;
- (id)defaultBackgroundColor;
- (void)layout;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_createBorderView;
- (BOOL)gestureRecognizer:(id)a0 canPreventGestureRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })buttonSize;
- (void).cxx_destruct;
- (void)_createImageView;
- (BOOL)accessibilityPerformPress;
- (void)buttonPressed:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)_createBackgroundView;
- (float)buttonCornerRadius;
- (void)setProgress:(float)a0 animated:(BOOL)a1;
- (void)_updateInnerProgressLayerStroke;
- (void)beginIndeterminateAnimation;
- (void)endIndeterminateAnimation;
- (void)hideProgressAnimated:(BOOL)a0;
- (void)showPlayIndicator:(BOOL)a0;
- (void)setShowBorder:(BOOL)a0;
- (void)_updateOuterProgressLayerStroke;
- (void)_createHighlightLayer;
- (void)_createInnerProgressView;
- (void)_createOuterProgressView;
- (id)_createProgressIndicatorLayerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
- (void)_hideTapHighlight;
- (void)_showPlayIndicator:(BOOL)a0;
- (void)_toggleToPlayState;
- (void)_updateEnabledState;
- (id)initWithStyle:(id)a0 theme:(id)a1;
- (void)installRecognizersOnView:(id)a0;
- (void)layoutPlayButton;
- (id)outerBorderColor;
- (id)pauseImage;
- (id)playImage;
- (void)setPlayButtonState:(unsigned long long)a0;
- (void)setShowOuterBorder:(BOOL)a0;

@end
