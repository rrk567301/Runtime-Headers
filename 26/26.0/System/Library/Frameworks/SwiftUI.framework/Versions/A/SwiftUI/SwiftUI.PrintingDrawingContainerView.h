@interface SwiftUI.PrintingDrawingContainerView : NSView {
    void /* unknown type, empty encoding */ printInfo;
    void /* unknown type, empty encoding */ pageCount;
    void /* unknown type, empty encoding */ bottomY;
    void /* unknown type, empty encoding */ previousLayout;
    void /* unknown type, empty encoding */ refreshPreviewHandler;
}

@property (nonatomic) BOOL flipped;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)knowsPageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPage:(long long)a0;

@end
