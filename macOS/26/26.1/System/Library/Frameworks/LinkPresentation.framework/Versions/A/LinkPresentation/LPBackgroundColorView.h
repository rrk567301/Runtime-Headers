@class NSColor;

@interface LPBackgroundColorView : NSView

@property (retain, nonatomic) NSColor *color;

- (void)viewDidChangeEffectiveAppearance;
- (id)initWithColor:(id)a0;
- (void).cxx_destruct;
- (void)updateColor;

@end
