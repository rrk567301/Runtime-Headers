@class TLKGridRowView;

@interface SearchUITableRowCardView : SearchUICardSectionView

@property (retain, nonatomic) TLKGridRowView *contentView;

+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })defaultLayoutMargins;
+ (char)hasOnlyImages:(id)a0;
+ (char)isAHeader:(id)a0;
+ (double)largestImageSizeForSection:(id)a0;
+ (char)supportsRecyclingForCardSection:(id)a0;

- (id)leadingTextView;
- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })verticalBaselineInsetsForHeader:(char)a0 isCompactTable:(char)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })verticalBaselineInsetsForRowsWithCompactTable:(char)a0;

@end
