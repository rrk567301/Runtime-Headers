@class NSString, CAFilter;

@interface AKAuthorizationAppleIDButton : AKAuthorizationButton <NSAccessibilityButton> {
    long long _type;
    long long _style;
    CAFilter *_highlightFilter;
    BOOL _changesInterfaceStyle;
}

@property (class, readonly, nonatomic) double defaultCornerRadius;

@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;
+ (BOOL)accessibilityIsSingleCelled;
+ (long long)_buttonStyleForUIStyle;
+ (id)buttonWithType:(long long)a0 style:(long long)a1;

- (void)setHighlighted:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (void)mouseUp:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDragged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)_commonInit;
- (void)encodeWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityElement;
- (void)setButtonText:(id)a0;
- (void)_createHighlightFilterIfNecessary;
- (void)_drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)_isInsideButtonEvent:(id)a0;
- (void)_performAnimationToSetHighlighted:(BOOL)a0;
- (id)initWithAuthorizationButtonType:(long long)a0 authorizationButtonStyle:(long long)a1;

@end
