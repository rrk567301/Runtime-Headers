@class PRSTableRowCardSection;

@interface PRSTableHeaderSliceViewController : PRSTableRowSliceViewController

@property long long firstTrailingIndex;
@property long long centerIndex;
@property BOOL isCompactTable;
@property (retain) PRSTableRowCardSection *section;

- (void).cxx_destruct;
- (id)initWithCardSection:(id)a0;
- (BOOL)shouldAllowOtherViewsToOverlap:(id)a0;
- (double)labelBottomBaselineSpacing;
- (double)labelTopBaselineSpacing;
- (BOOL)labelsAreVibrant;
- (void)setupWithTableRowSliceControllers:(id)a0;
- (void)addAccessibilityTableRow:(id)a0;

@end
