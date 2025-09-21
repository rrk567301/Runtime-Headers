@class NSArray, MKPlaceAttributionCellButton, NSLayoutConstraint, _MKUILabel;
@protocol MKPlaceAttributionCellDelegate;

@interface MKPlaceAttributionCell : MKPlaceSectionRowView <MKPlaceAttributionCellButtonDelegate> {
    NSArray *_visibleConstraints;
    NSLayoutConstraint *_collapsedConstraint;
    char _highlighted;
}

@property (retain, nonatomic) _MKUILabel *label;
@property (retain, nonatomic) MKPlaceAttributionCellButton *labelButton;
@property (retain, nonatomic) NSLayoutConstraint *labelBaselineToTop;
@property (retain, nonatomic) NSLayoutConstraint *labelLastBaselineToBottom;
@property (weak, nonatomic) id<MKPlaceAttributionCellDelegate> cellDelegate;

+ (id)fontForLabel;

- (void).cxx_destruct;
- (void)setHighlighted:(char)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isHighlighted;
- (void)updateConstraints;
- (void)viewDidChangeEffectiveAppearance;
- (void)_contentSizeDidChange;
- (void)attributionCellButton:(id)a0 isHighighted:(char)a1 executeAction:(char)a2;
- (void)attributionClicked;
- (void)createConstraints;
- (double)currentHeight;
- (void)setAttributionString:(id)a0;

@end
