@class NSArray, PXSnapStripViewInternal;

@interface PXSnapStripView : UXView {
    PXSnapStripViewInternal *_stripView;
}

@property (copy, nonatomic) NSArray *indicatorInfos;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_updateStripView:(BOOL)a0;
- (void)setIndicatorInfos:(id)a0 animated:(BOOL)a1;

@end
