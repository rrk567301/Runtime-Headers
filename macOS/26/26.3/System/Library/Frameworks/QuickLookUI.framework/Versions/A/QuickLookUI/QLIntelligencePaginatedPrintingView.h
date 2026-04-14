@class QLDisplayBundle;

@interface QLIntelligencePaginatedPrintingView : NSView {
    QLDisplayBundle *_bundle;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithBundle:(id)a0;
- (void).cxx_destruct;
- (BOOL)knowsPageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (struct CGPoint { double x0; double x1; })locationOfPrintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPage:(long long)a0;

@end
