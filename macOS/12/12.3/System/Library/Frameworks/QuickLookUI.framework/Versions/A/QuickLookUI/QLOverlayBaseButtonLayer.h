@class CALayer, QLAccessibilityUIElement;

@interface QLOverlayBaseButtonLayer : CALayer <QLOverlayClickableButton> {
    CALayer *_backgroundLayer;
    CALayer *_contentLayer;
    BOOL _firstMouseDownWhenEnabled;
    QLAccessibilityUIElement *_accessibilityElement;
}

@property (readonly) double buttonBorderWidth;
@property id target;
@property SEL action;
@property (nonatomic) BOOL smallSize;
@property (readonly) QLAccessibilityUIElement *accessibilityElement;

+ (double)_shadowBlur;
+ (struct CGSize { double x0; double x1; })buttonSize;
+ (void)_pushButtonShapeForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
+ (double)_shadowWidth;

- (void)dealloc;
- (id)init;
- (void)setContentsScale:(double)a0;
- (BOOL)accessibilityPerformPress;
- (BOOL)mouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0 clickCount:(long long)a1;
- (BOOL)_mouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0 clickCount:(long long)a1 accessibilityPress:(BOOL)a2;
- (BOOL)_enableClickAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_beginMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_endMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
