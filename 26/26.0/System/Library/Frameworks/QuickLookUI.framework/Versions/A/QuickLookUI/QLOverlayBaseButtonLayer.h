@class CALayer, QLAccessibilityUIElement;

@interface QLOverlayBaseButtonLayer : CALayer <QLOverlayClickableButton> {
    CALayer *_backgroundLayer;
    CALayer *_contentLayer;
    BOOL _firstMouseDownWhenEnabled;
    QLAccessibilityUIElement *_accessibilityElement;
}

@property (readonly) double buttonBorderWidth;
@property (weak) id target;
@property SEL action;
@property (nonatomic) BOOL smallSize;
@property (readonly) QLAccessibilityUIElement *accessibilityElement;

+ (struct CGSize { double x0; double x1; })buttonSize;
+ (void)_pushButtonShapeForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (BOOL)accessibilityPerformPress;
- (BOOL)mouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0 clickCount:(long long)a1;
- (void)_beginMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_enableClickAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_endMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_mouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0 clickCount:(long long)a1 accessibilityPress:(BOOL)a2;

@end
