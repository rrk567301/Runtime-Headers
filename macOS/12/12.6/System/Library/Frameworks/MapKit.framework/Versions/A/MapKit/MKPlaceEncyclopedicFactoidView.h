@class _MKUILabel, NSLayoutConstraint;

@interface MKPlaceEncyclopedicFactoidView : MKPlaceSectionRowView {
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    BOOL _isStandAlone;
}

@property (retain, nonatomic) _MKUILabel *keyLabel;
@property (retain, nonatomic) _MKUILabel *valueLabel;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)_keyLabelWithString:(id)a0;
- (id)_valueLabelWithString:(id)a0;
- (void)setUpConstraints;
- (id)_keyLabelFont;
- (id)initWithTextItem:(id)a0 isStandAloneFactoid:(BOOL)a1;

@end
