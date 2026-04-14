@class NSColor, NSLayoutRect, NSLayoutYAxisAnchor;

@interface AMPPositionPointer : NSView

@property (retain, nonatomic) NSLayoutRect *contentRect;
@property (retain, nonatomic) NSLayoutYAxisAnchor *contentBottom;
@property (nonatomic) double contentCornerRadius;
@property (retain, nonatomic) NSColor *fillColor;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addContentView:(id)a0;
- (void)initLayoutElements;
- (id)propertyKeysForViewSpy;
- (id)stringValueForViewSpyPropertyKey:(id)a0;

@end
