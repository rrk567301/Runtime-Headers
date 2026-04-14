@interface TSCHChartDataSetNameLayoutItem : TSCHChartTitleLayoutItem

@property (readonly, nonatomic) BOOL isAboveChartBody;

- (BOOL)shouldPlaceTitleAtCenter;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (BOOL)isTitleOn;
- (id)titleTextForModel:(id)a0;
- (unsigned long long)titleParagraphStyleIndex;
- (id)titleSelectionPath;

@end
