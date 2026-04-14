@interface SwiftUI.AppKitScrollView : NSScrollView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_helper;
    void /* unknown type, empty encoding */ isTracking;
    void /* unknown type, empty encoding */ isScrollEnabled;
}

@property (nonatomic, readonly) BOOL _usesOverlayScrollers;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollWheel:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;

@end
