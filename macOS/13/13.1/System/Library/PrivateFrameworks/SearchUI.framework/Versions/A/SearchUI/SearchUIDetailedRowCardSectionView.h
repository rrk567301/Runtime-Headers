@class SearchUIDetailedView, SearchUIDetailedRowModel;

@interface SearchUIDetailedRowCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) SearchUIDetailedView *contentView;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;
+ (BOOL)supportsCustomUserReportRequestAfforance;
+ (int)defaultSeparatorStyleForCardSection:(id)a0;

- (void)setFeedbackDelegate:(id)a0;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (id)setupContentView;
- (id)leadingTextView;
- (void)updateWithRowModel:(id)a0;
- (id)viewForQuickLookZoomTransitionSource;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (id)leadingView;
- (id)findDescendentOfView:(id)a0 matchingClass:(Class)a1;

@end
