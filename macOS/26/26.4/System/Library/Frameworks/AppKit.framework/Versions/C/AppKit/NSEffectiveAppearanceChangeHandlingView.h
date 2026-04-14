@interface NSEffectiveAppearanceChangeHandlingView : NSView

@property (copy) id /* block */ effectiveAppearanceDidChangeHandler;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;

@end
