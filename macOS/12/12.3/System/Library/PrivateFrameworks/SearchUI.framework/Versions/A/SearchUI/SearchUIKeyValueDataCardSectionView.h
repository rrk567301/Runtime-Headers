@class TLKKeyValueView;

@interface SearchUIKeyValueDataCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKKeyValueView *contentView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;
- (id)convertSFKeyValueData:(id)a0;

@end
