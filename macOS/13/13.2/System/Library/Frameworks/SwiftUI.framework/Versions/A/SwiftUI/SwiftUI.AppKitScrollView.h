@interface SwiftUI.AppKitScrollView : NSScrollView {
    void /* unknown type, empty encoding */ isScrollEnabled;
    void /* unknown type, empty encoding */ axes;
    void /* unknown type, empty encoding */ bounceAxes;
    void /* unknown type, empty encoding */ horizontalIndicatorVisibility;
    void /* unknown type, empty encoding */ verticalIndicatorVisibility;
    void /* unknown type, empty encoding */ scrollIndicatorsAlwaysOverlayContent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollIndicatorObserver;
    void /* unknown type, empty encoding */ scrollersRefuseFirstResponder;
    void /* unknown type, empty encoding */ preferredScrollIndicatorStyle;
}

@property (nonatomic, readonly) BOOL _usesOverlayScrollers;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollWheel:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;

@end
