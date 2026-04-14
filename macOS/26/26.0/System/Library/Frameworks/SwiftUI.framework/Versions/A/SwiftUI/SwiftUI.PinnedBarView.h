@interface SwiftUI.PinnedBarView : NSView {
    void /* unknown type, empty encoding */ edge;
    void /* unknown type, empty encoding */ isPinned;
    void /* unknown type, empty encoding */ pocketContainerRegistered;
}

@property (nonatomic, readonly) long long _scrollPocketElementStyle;

- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (BOOL)_shouldArrangeSublayers;

@end
