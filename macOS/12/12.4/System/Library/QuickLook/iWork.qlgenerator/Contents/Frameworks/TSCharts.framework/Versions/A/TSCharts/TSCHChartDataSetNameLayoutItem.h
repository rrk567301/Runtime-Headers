@interface TSCHChartDataSetNameLayoutItem : TSCHChartTitleLayoutItem

@property (readonly, nonatomic) BOOL isAboveChartBody;

- (id)titleSelectionPath;
- (unsigned long long)titleParagraphStyleIndex;
- (BOOL)shouldPlaceTitleAtCenter;
- (BOOL)isTitleOn;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (id)titleTextForModel:(id)a0;

@end
