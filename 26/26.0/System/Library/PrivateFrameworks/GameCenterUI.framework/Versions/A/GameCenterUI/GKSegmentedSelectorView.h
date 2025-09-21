@class UXSegmentedControl, NSLayoutConstraint;

@interface GKSegmentedSelectorView : GKHeaderWithUnderlineView

@property (retain, nonatomic) NSLayoutConstraint *xPositionConstraint;
@property (retain, nonatomic) UXSegmentedControl *segmentedControl;
@property (nonatomic) id target;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (BOOL)drawsUnderline;

@end
