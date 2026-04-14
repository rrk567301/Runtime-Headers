@class SiriUIContentLabel;

@interface SiriUICardHeaderView : NSView

@property (weak) SiriUIContentLabel *sashLabel;

- (id)accessibilityIdentifier;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (void)awakeFromNib;
- (void)_adjustSashTitleCompositeFilterForCurrentAppearance;

@end
