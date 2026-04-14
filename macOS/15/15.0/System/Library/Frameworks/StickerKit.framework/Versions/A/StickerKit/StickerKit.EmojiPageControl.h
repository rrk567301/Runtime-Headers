@interface StickerKit.EmojiPageControl : StickerKit.FlippedView {
    void /* unknown type, empty encoding */ hidesForSinglePage;
    void /* unknown type, empty encoding */ numberOfPages;
    void /* unknown type, empty encoding */ previousCurrentPage;
    void /* unknown type, empty encoding */ currentPage;
    void /* unknown type, empty encoding */ maxAllowedIndicators;
    void /* unknown type, empty encoding */ progress;
    void /* unknown type, empty encoding */ drawsPillBackground;
    void /* unknown type, empty encoding */ pillBackground;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ visibleContentFrame;
    void /* unknown type, empty encoding */ visibleRange;
    void /* unknown type, empty encoding */ layerMask;
    void /* unknown type, empty encoding */ indicators;
    void /* unknown type, empty encoding */ indicatorHeight;
    void /* unknown type, empty encoding */ gap;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;

@end
