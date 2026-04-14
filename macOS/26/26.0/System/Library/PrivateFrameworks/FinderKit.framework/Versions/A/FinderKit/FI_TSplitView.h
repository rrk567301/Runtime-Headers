@interface FI_TSplitView : NSSplitView {
    double _dividerThickness;
}

@property (nonatomic) double dividerThickness;

- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)initCommon;
- (void)_resetUserPreferredThicknessAfterUserResizeWithDelay;
- (double)positionOfDividerAtIndex:(unsigned long long)a0;
- (void)viewDidEndLiveResize;
- (id)subviewAtIndex:(unsigned long long)a0;
- (void)animatePosition:(double)a0 ofDividerAtIndex:(unsigned long long)a1;
- (BOOL)dividerIsVisibleAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeOfSubviewAtIndex:(unsigned long long)a0;

@end
