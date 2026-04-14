@interface SwiftUI.RenderBoxView : SwiftUI._NSGraphicsView <RBLayerDelegate> {
    void /* unknown type, empty encoding */ rendersFirstFrameAsynchronously;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (id)RBLayerDefaultDevice:(id)a0;
- (void)RBLayer:(id)a0 draw:(id)a1;

@end
