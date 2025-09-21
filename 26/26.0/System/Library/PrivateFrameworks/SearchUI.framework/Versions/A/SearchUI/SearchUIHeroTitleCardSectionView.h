@class SearchUIImageView, TLKStackView, SFHeroTitleCardSection, SearchUILabel, SearchUIButtonItemStackView;

@interface SearchUIHeroTitleCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) SFHeroTitleCardSection *section;
@property (retain, nonatomic) TLKStackView *contentView;
@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) SearchUIImageView *titleImageView;
@property (retain, nonatomic) SearchUILabel *subtitleLabel;
@property (retain, nonatomic) SearchUIButtonItemStackView *buttonItemStackView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void).cxx_destruct;
- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;

@end
