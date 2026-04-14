@class NSString;

@interface PKContactButton : NSButton

@property (readonly) unsigned long long type;
@property (readonly) NSString *value;

+ (id)contactViewWithPhone:(id)a0 email:(id)a1 website:(id)a2;

- (void).cxx_destruct;
- (id)_buttonTitle;
- (void)drawFocusRingMask;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (id)initWithType:(unsigned long long)a0 value:(id)a1;
- (void)buttonAction:(id)a0;
- (id)_popOverContent;
- (id)_backgroundCirclePathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_contactURL;
- (id)_imageGlyph;

@end
