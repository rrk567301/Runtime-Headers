@class NSView, NSObject;
@protocol NSMenuRepresentable, NSMenuItemViewProtocol;

@interface NSHorizontalMenuImpl : NSCocoaMenuImpl {
    NSObject<NSMenuRepresentable> *_representationView;
    NSView<NSMenuItemViewProtocol> *_rememberedHighlightedItemView;
    BOOL _selectionDrawsInactive;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)loadView;
- (id)window;
- (id)_window;
- (id)appearance;
- (void).cxx_destruct;
- (id)parentWindow;
- (long long)predominantAxis;
- (id)trackingSession;
- (id)_menuItemForView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionLayerFrameForView:(id)a0;
- (id)activeRepresentationView;
- (BOOL)canOpenSubmenu;
- (void)forEachRepresentationViewDo:(id /* block */)a0;
- (BOOL)highlightNext:(long long)a0 axis:(long long)a1;
- (BOOL)highlightPrevious:(long long)a0 axis:(long long)a1;
- (id)initWithMenu:(id)a0;
- (id)makeViewForMenuItemAtIndex:(long long)a0 withFilterQuery:(id)a1;
- (void)unhighlightItemIfNeeded;
- (id)viewAtCurrentMouseLocation;
- (id)viewAtCurrentMouseLocation:(id)a0;
- (void)viewWillAppear;

@end
