@class TLKActivityIndicatorView;

@interface SearchUIActivityIndicatorCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKActivityIndicatorView *contentView;

+ (char)supportsRecyclingForCardSection:(id)a0;

- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;

@end
