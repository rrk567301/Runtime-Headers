@class TLKButtonView;

@interface SearchUIButtonCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKButtonView *contentView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;

@end
