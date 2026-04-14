@class NSColor;

@interface LPBackgroundColorView : NSView

@property (retain, nonatomic) NSColor *color;

- (id)initWithColor:(id)a0;
- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (void)updateColor;

@end
