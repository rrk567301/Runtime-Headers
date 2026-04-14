@class NSMutableArray, NSToolbarItemGroup;

@interface NSToolbarItemGroupView : NSView {
    NSToolbarItemGroup *_groupItem;
    NSMutableArray *_wrapperViews;
}

- (void).cxx_destruct;
- (void)layout;
- (id)initWithItem:(id)a0;
- (id)declaredLayoutConstraints;
- (void)moveRight:(id)a0;
- (void)moveLeft:(id)a0;
- (void)sendAction;
- (void)noteSubitemsChanged;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItem:(id)a0;
- (void)_configureWrapperViews;
- (struct __NSToolbarLayoutMetrics { double x0; double x1; double x2; double x3; })_toolbarMetrics;
- (void)_layoutWrapperViewsWithAttributes:(id)a0;
- (id)_selectableToolbarViews;
- (BOOL)_moveInDirection:(long long)a0;

@end
