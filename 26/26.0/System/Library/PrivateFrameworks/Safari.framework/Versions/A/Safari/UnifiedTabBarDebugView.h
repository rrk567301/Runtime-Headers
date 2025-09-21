@class NSView, UnifiedTabBarLayout;

@interface UnifiedTabBarDebugView : NSView {
    NSView *_unpinnedTabScrollingBoundsView;
    NSView *_unpinnedActiveTabScrollingBoundsView;
    NSView *_unpinnedInactiveTabScrollingBoundsView;
}

@property (retain, nonatomic) UnifiedTabBarLayout *currentLayout;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_makeViewWithName:(id)a0 borderColor:(id)a1 borderWidth:(double)a2;

@end
