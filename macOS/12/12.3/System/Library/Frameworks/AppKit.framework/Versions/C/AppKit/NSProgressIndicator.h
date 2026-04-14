@class NSColor, NSString, CALayer;
@protocol NSObject;

@interface NSProgressIndicator : NSView <NSAccessibilityProgressIndicator> {
    double _minimum;
    double _maximum;
    double _value;
    CALayer *_indicatorLayer;
    double _animationDelay;
    id<NSObject> _windowOcclusionChangedNotificationToken;
    NSColor *_roundColor;
    id<NSObject> _systemColorsChangedNotificationToken;
    unsigned int _animationIndex;
    struct { unsigned char isSpinning : 1; unsigned char controlTint : 3; unsigned char spinningTint : 2; unsigned char controlSize : 2; unsigned char style : 1; unsigned char hideWhenStopped : 1; unsigned char isHidden : 1; unsigned char isHeartBeatInstalled : 1; unsigned char isBezeled : 1; unsigned char isIndeterminate : 1; unsigned char usesThreadedAnimation : 1; unsigned char isBackgroundEmphasized : 1; } _progressIndicatorFlags;
}

@property (readonly, nonatomic, getter=_isAnimating) BOOL _animating;
@property (readonly, nonatomic, getter=_isEffectivelyHidden) BOOL _effectivelyHidden;
@property (retain, nonatomic) NSColor *roundDeterminateColor;
@property long long spinningTint;
@property (getter=isIndeterminate) BOOL indeterminate;
@property (getter=isBezeled) BOOL bezeled;
@property unsigned long long controlTint;
@property unsigned long long controlSize;
@property double doubleValue;
@property double minValue;
@property double maxValue;
@property BOOL usesThreadedAnimation;
@property unsigned long long style;
@property (getter=isDisplayedWhenStopped) BOOL displayedWhenStopped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)defaultAnimationForKey:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isFlipped;
- (BOOL)allowsVibrancy;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (Class)_animatorClass;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (id)accessibilityValue;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityMinValueAttribute;
- (BOOL)accessibilityIsMinValueAttributeSettable;
- (id)accessibilityMaxValueAttribute;
- (BOOL)accessibilityIsMaxValueAttributeSettable;
- (id)accessibilityOrientationAttribute;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (Class)_classToCheckForWantsUpdateLayer;
- (void)_windowChangedKeyState;
- (void)_setWindow:(id)a0;
- (double)firstBaselineOffsetFromTop;
- (int)_vibrancyBlendMode;
- (void)heartBeat:(struct { double x0; double x1; double x2; struct { unsigned char x0 : 1; unsigned int x1 : 31; } x3; } *)a0;
- (void)_setBackgroundStyleForSubtree:(long long)a0;
- (void)startAnimation:(id)a0;
- (void)stopAnimation:(id)a0;
- (void)_stopAnimationAndRedisplay:(BOOL)a0;
- (void)_updateHeartBeat;
- (void)geometryInWindowDidChange;
- (void)incrementBy:(double)a0;
- (void)viewDidHide;
- (void)viewDidUnhide;
- (double)animationDelay;
- (void)setAnimationDelay:(double)a0;
- (void)animate:(id)a0;
- (id)ns_widgetType;

@end
