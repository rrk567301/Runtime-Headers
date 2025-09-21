@class TLKButtonView;

@interface SearchUIButtonCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKButtonView *contentView;

+ (char)fillsBackgroundWithContentForRowModel:(id)a0;
+ (char)supportsRecyclingForCardSection:(id)a0;

- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;

@end
