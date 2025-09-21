@class NSTextField, ASDividerView, ASRatingControl, NSLayoutConstraint, NSStackView;

@interface ASWriteReviewRateView : ASWriteReviewDialogView {
    BOOL _needsDisplayForSubmittedRating;
    NSLayoutConstraint *_primaryButtonTopConstraint;
    NSLayoutConstraint *_primaryButtonHeightConstraint;
    NSLayoutConstraint *_cancelButtonTopConstraint;
    NSStackView *_verticalStack;
    ASDividerView *_dividerView;
}

@property (readonly, nonatomic) NSTextField *titleLabel;
@property (readonly, nonatomic) NSTextField *subtitleLabel;
@property (readonly, nonatomic) ASRatingControl *ratingControl;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)displayIfNeeded;
- (void)layout;
- (BOOL)isFlipped;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_configureConstraints;
- (void)_configureSubviewsForSubmittedRating;
- (void)_frameBasedLayout;
- (id)_updateAttributedString:(id)a0 toString:(id)a1 withColor:(id)a2;
- (id)initWithConfiguration:(id)a0 useGlassDesign:(BOOL)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)setNeedsDisplayForSubmittedRatingState:(BOOL)a0;

@end
