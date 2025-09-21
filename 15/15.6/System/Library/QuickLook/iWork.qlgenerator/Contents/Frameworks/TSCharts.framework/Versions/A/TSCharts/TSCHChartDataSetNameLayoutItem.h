@interface TSCHChartDataSetNameLayoutItem : TSCHChartTitleLayoutItem

@property (readonly, nonatomic) char isAboveChartBody;

- (struct CGSize { double x0; double x1; })calcMinSize;
- (char)isTitleOn;
- (char)shouldPlaceTitleAtCenter;
- (unsigned long long)titleParagraphStyleIndex;
- (id)titleSelectionPath;
- (id)titleTextForModel:(id)a0;

@end
