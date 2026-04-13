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

+ (BOOL)accessibilityIsSingleCelled;
+ (Class)layerClass;
+ (long long)_buttonStyleForUIStyle;
+ (id)buttonWithType:(long long)a0 style:(long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void)mouseDown:(id)a0;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityElement;
- (void)_commonInit;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)setButtonText:(id)a0;
- (id)initWithAuthorizationButtonType:(long long)a0 authorizationButtonStyle:(long long)a1;
- (void)_drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)_createHighlightFilterIfNecessary;
- (void)_performAnimationToSetHighlighted:(BOOL)a0;
- (BOOL)_isInsideButtonEvent:(id)a0;

@end
