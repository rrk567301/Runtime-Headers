@class TLKSimpleRowView;

@interface SearchUIRowCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKSimpleRowView *contentView;

+ (id)dragSubtitleForCardSection:(id)a0;
+ (id)dragTitleForCardSection:(id)a0;
+ (char)hasLeadingImageForCardSection:(id)a0;
+ (char)prefersNoSeparatorAboveRowModel:(id)a0;
+ (char)supportsRecyclingForCardSection:(id)a0;

- (id)leadingTextView;
- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;

@end
