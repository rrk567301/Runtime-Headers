@interface SwiftUI.PrintingDrawingContainerView : NSView {
    void /* unknown type, empty encoding */ printInfo;
    void /* unknown type, empty encoding */ pageCount;
    void /* unknown type, empty encoding */ bottomY;
    void /* unknown type, empty encoding */ previousLayout;
}

@property (nonatomic) char flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (char)knowsPageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPage:(long long)a0;

@end
