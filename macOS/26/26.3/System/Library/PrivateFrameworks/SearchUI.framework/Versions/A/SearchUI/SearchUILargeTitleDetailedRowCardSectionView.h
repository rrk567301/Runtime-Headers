@class TLKStackView, SearchUILabel, TLKTextButton, SearchUIButtonItemStackView;

@interface SearchUILargeTitleDetailedRowCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKStackView *contentView;
@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) TLKTextButton *subtitleButton;
@property (retain, nonatomic) SearchUIButtonItemStackView *buttonStackView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void).cxx_destruct;
- (id)setupContentView;
- (void)didSelectSubtitleItem;
- (void)updateWithRowModel:(id)a0;

@end
