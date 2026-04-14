@interface IKFilterUIView : NSView {
    void *_priv[8];
}

+ (id)viewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 filter:(id)a1;

- (id)filter;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 filter:(id)a1;
- (id)objectController;

@end
