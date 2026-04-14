@class SiriUIContentLabel;

@interface SiriUICardHeaderView : NSView

@property (weak) SiriUIContentLabel *sashLabel;

- (void)viewDidChangeEffectiveAppearance;
- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (void)awakeFromNib;
- (void)_adjustSashTitleCompositeFilterForCurrentAppearance;

@end
