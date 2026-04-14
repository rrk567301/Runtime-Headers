@class NSArray, NSString, NSObject, NSMutableArray;
@protocol NSISEngineDelegate;

@interface NSToolbarItemGroupView : NSView <_NSToolbarItemLayoutWrapper> {
    NSArray *_subitems;
    NSMutableArray *_wrapperViews;
    struct __NSToolbarLayoutMetrics { double firstItemViewerInset; double lastItemViewerInset; double lastSidebarItemViewerInset; double interItemViewerSpacing; double interPlatterSpacing; double toolbarHeightIcon; double toolbarHeightIconAndLabel; double toolbarHeightLabel; double minimumToolbarHeight; } _metrics;
    unsigned long long _controlSize;
    NSObject<NSISEngineDelegate> *_secondaryEngineDelegate;
}

@property (copy) NSArray *subitems;
@property struct __NSToolbarLayoutMetrics { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } metrics;
@property (readonly, copy) NSArray *glassAwareSubviews;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (weak) NSObject<NSISEngineDelegate> *secondaryEngineDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layout;
- (void).cxx_destruct;
- (void)_configureWrapperViews;
- (void)_itemBadgeChangedForItem:(id)a0;
- (void)_layoutWrapperViewsWithAttributes:(id)a0;
- (BOOL)_moveInDirection:(long long)a0;
- (id)_selectableToolbarViews;
- (id)declaredLayoutConstraints;
- (void)invalidateConstraints;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItem:(id)a0;
- (void)sendAction;

@end
