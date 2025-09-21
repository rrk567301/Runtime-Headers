@class SearchUIDetailedView, SearchUIDetailedRowModel;

@interface SearchUIDetailedRowCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) SearchUIDetailedView *contentView;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;

+ (int)defaultSeparatorStyleForRowModel:(id)a0;
+ (char)supportsCustomUserReportRequestAfforance;
+ (char)supportsRecyclingForCardSection:(id)a0;

- (void)setFeedbackDelegate:(id)a0;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (id)leadingTextView;
- (id)setupContentView;
- (id)findDescendentOfView:(id)a0 matchingClass:(Class)a1;
- (id)leadingView;
- (void)updateChevronVisible:(char)a0 leaveSpaceForChevron:(char)a1;
- (void)updateWithRowModel:(id)a0;
- (id)viewForQuickLookZoomTransitionSource;

@end
