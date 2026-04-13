@class NSArray, NSMutableArray, NSLayoutGuide;

@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView {
    NSMutableArray *_factoidViews;
    NSLayoutGuide *_insetMetricGuide;
    NSLayoutGuide *_leftMetricGuide;
    NSLayoutGuide *_rightMetricGuide;
    unsigned long long _columnCount;
}

@property (retain, nonatomic) NSArray *items;
@property (readonly, nonatomic, getter=factoidViewsInARow) NSArray *factoidViewsInARow;
@property (retain, nonatomic) NSMutableArray *labelConstraints;
@property (nonatomic) BOOL isStandAlone;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_contentSizeDidChange;
- (void)refreshContent:(BOOL)a0;
- (void)refreshColumnCount;
- (void)setColumnCount:(unsigned long long)a0;
- (void)addWidthAndSideSpacingConstraintsForLabels;

@end
