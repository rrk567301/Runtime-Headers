@interface NSEffectiveAppearanceChangeHandlingView : NSView

@property (copy) id /* block */ effectiveAppearanceDidChangeHandler;

- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;

@end
