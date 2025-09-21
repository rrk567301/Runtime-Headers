@class TLKSectionHeaderView;

@interface SearchUISectionHeaderCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKSectionHeaderView *contentView;

+ (char)fillsBackgroundWithContentForRowModel:(id)a0;
+ (char)supportsRecyclingForCardSection:(id)a0;

- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;

@end
