@class TLKLabel, TLKStackView;

@interface TLKSplitTitleContainer : NSView

@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) TLKLabel *centerLeadingTitleLabel;
@property (retain, nonatomic) TLKLabel *centerTrailingTitleLabel;
@property (retain, nonatomic) TLKStackView *titleStackView;
@property BOOL useLargeTitle;

+ (double)widthForString:(id)a0 font:(id)a1;

- (void)layout;
- (id)titleFont;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)init;
- (BOOL)titleLabelsFitInWidth:(double)a0 pointSize:(double)a1;

@end
