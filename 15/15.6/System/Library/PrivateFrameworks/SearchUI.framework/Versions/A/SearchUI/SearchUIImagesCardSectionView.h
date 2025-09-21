@class TLKImagesView;

@interface SearchUIImagesCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKImagesView *contentView;

+ (char)fillsBackgroundWithContentForRowModel:(id)a0;
+ (char)supportsRecyclingForCardSection:(id)a0;

- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;

@end
