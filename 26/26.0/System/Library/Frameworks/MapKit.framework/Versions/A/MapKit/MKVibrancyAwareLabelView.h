@class NSTextField, NSAttributedString, MKAttributedStringBlendingConfiguration;

@interface MKVibrancyAwareLabelView : NSView {
    NSTextField *_backgroundLabel;
    NSTextField *_foregroundLabel;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) MKAttributedStringBlendingConfiguration *blendingConfiguration;
@property (copy, nonatomic) NSAttributedString *attributedStringValue;
@property (nonatomic) long long blendingMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;
- (void)dblv_commonInit;
- (void)setSubviewsContentCompressionResistancePriority:(float)a0 forOrientation:(long long)a1;
- (void)rebuildBlendingConfiguration;

@end
