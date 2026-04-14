@interface IKPTSquareButtonCell : NSButtonCell {
    unsigned char _displaysState : 1;
}

@property long long style;
@property BOOL displaysState;

+ (id)resourceImageNamed:(id)a0;
+ (id)leftPressed:(BOOL)a0 mouseDown:(BOOL)a1;
+ (id)middlePressed:(BOOL)a0 mouseDown:(BOOL)a1;
+ (id)rightPressed:(BOOL)a0 mouseDown:(BOOL)a1;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)drawBezelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_textAttributes;
- (void)drawFocusRingMaskWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)commonInit;

@end
