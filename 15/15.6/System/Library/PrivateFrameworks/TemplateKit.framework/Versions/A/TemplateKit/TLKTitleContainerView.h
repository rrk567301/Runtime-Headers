@class TLKRichTextField, NUIContainerBoxView, TLKImageView, TLKLabel;

@interface TLKTitleContainerView : TLKStackView

@property (retain, nonatomic) TLKRichTextField *titleField;
@property (retain, nonatomic) TLKLabel *secondaryLabel;
@property (retain, nonatomic) NUIContainerBoxView *secondaryImageViewBoxView;
@property (retain, nonatomic) TLKImageView *secondaryImageView;

+ (char)hasNonBoldFormattingInRichText:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)titleFont;
- (id)titleLabel;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)secondaryTitleLabelString;
- (id)titleLabelString;
- (void)updateResultWithTitle:(id)a0 secondaryTitle:(id)a1 image:(id)a2 detached:(char)a3 useCompactMode:(char)a4 truncateMiddle:(char)a5;

@end
