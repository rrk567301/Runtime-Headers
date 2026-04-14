@class NSColor, NSGradient;

@interface VUIActionButton : NSButton

@property (retain, nonatomic) NSColor *startingColor;
@property (retain, nonatomic) NSColor *endingColor;
@property (retain, nonatomic) NSGradient *pressedGradient;
@property (retain, nonatomic) NSGradient *unpressedGradient;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
