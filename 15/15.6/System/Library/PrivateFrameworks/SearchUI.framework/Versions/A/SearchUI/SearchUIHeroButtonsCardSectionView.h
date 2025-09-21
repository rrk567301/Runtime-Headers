@class SearchUIButtonItemStackView, SFButtonListCardSection;

@interface SearchUIHeroButtonsCardSectionView : SearchUICardSectionView

@property (readonly, nonatomic) SFButtonListCardSection *section;
@property (readonly) SearchUIButtonItemStackView *contentView;

+ (char)supportsRecyclingForCardSection:(id)a0;

- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;

@end
