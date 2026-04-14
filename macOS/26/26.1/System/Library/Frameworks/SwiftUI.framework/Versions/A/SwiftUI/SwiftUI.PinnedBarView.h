@interface SwiftUI.PinnedBarView : NSView {
    void /* unknown type, empty encoding */ edge;
    void /* unknown type, empty encoding */ isPinned;
    void /* unknown type, empty encoding */ pocketContainerRegistered;
    void /* unknown type, empty encoding */ hostingScrollView;
}

@property (nonatomic, readonly) long long _scrollPocketElementStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldArrangeSublayers;

@end
