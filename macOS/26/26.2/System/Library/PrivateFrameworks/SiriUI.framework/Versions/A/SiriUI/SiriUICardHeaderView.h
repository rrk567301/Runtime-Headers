@class SiriUIContentLabel;

@interface SiriUICardHeaderView : NSView

@property (weak) SiriUIContentLabel *sashLabel;

- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (id)accessibilityChildren;
- (void)awakeFromNib;
- (void)_adjustSashTitleCompositeFilterForCurrentAppearance;

@end
