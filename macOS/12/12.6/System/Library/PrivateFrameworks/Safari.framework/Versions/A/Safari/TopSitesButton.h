@interface TopSitesButton : ButtonPlus {
    BOOL _isInFavoritesBar;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)draggingEntered:(id)a0;
- (void)draggingExited:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)concludeDragOperation:(id)a0;
- (void)prepareForFavoritesBar;

@end
