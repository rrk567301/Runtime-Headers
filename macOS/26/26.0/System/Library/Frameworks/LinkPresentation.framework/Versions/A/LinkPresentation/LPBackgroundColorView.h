@class NSColor;

@interface LPBackgroundColorView : NSView

@property (retain, nonatomic) NSColor *color;

- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0;
- (void)updateColor;

@end
