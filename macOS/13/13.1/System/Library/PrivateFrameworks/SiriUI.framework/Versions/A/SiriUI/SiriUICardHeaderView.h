@class SiriUIContentLabel;

@interface SiriUICardHeaderView : NSView

@property (weak) SiriUIContentLabel *sashLabel;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (id)accessibilityChildren;
- (void)awakeFromNib;
- (id)accessibilityIdentifier;
- (void)_adjustSashTitleCompositeFilterForCurrentAppearance;

@end
