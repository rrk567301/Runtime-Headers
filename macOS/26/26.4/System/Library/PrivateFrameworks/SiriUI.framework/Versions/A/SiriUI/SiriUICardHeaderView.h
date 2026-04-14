@class SiriUIContentLabel;

@interface SiriUICardHeaderView : NSView

@property (weak) SiriUIContentLabel *sashLabel;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (id)accessibilityIdentifier;
- (id)accessibilityChildren;
- (void)awakeFromNib;
- (void)_adjustSashTitleCompositeFilterForCurrentAppearance;

@end
