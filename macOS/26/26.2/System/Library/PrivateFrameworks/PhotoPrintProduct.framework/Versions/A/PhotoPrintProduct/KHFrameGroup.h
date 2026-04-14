@interface KHFrameGroup : KHModel {
    long long _layoutId;
    long long _horizontalResizing;
    long long _verticalResizing;
    double _topMargin;
    double _bottomMargin;
    double _leftMargin;
    double _rightMargin;
    long long _visible;
    long long _sequence;
    long long _holeCount;
}

- (void)setVisible:(long long)a0;
- (long long)visible;
- (double)rightMargin;
- (void)setSequence:(long long)a0;
- (long long)sequence;
- (double)bottomMargin;
- (double)leftMargin;
- (double)topMargin;
- (void)dealloc;
- (void)setRightMargin:(double)a0;
- (void)setBottomMargin:(double)a0;
- (void)setLeftMargin:(double)a0;
- (void)setTopMargin:(double)a0;
- (long long)layoutId;
- (void)setLayoutId:(long long)a0;
- (long long)holeCount;
- (void)setHoleCount:(long long)a0;
- (void)cacheHoleCount:(long long)a0;
- (void)cacheTopMargin:(double)a0;
- (void)cacheBottomMargin:(double)a0;
- (void)cacheHorizontalResizing:(long long)a0;
- (void)cacheLayoutId:(long long)a0;
- (void)cacheLeftMargin:(double)a0;
- (void)cacheRightMargin:(double)a0;
- (void)cacheSequence:(long long)a0;
- (void)cacheVerticalResizing:(long long)a0;
- (void)cacheVisible:(long long)a0;
- (long long)horizontalResizing;
- (void)setHorizontalResizing:(long long)a0;
- (void)setVerticalResizing:(long long)a0;
- (long long)verticalResizing;

@end
