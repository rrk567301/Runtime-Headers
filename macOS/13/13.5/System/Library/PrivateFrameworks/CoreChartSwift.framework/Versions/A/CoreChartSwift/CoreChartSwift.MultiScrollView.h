@interface CoreChartSwift.MultiScrollView : NSView {
    void /* unknown type, empty encoding */ primary;
    void /* unknown type, empty encoding */ primaryDocument;
    void /* unknown type, empty encoding */ layers;
    void /* unknown type, empty encoding */ shouldInitialize;
}

@property (nonatomic, readonly) BOOL flipped;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)scrollViewContentBoundsDidChange:(id)a0;

@end
