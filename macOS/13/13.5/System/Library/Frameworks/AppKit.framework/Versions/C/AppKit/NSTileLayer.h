@interface NSTileLayer : CALayer {
    unsigned char _isVisibleTile : 1;
    unsigned char _ignoreLayoutCall : 1;
    unsigned char _purged : 1;
    unsigned char _contentsAreInvalid : 1;
}

- (id)init;
- (BOOL)NS_isPurged;
- (BOOL)NS_isVisibleTile;
- (void)NS_prefetchContentsIfNecessary;
- (void)display;
- (BOOL)NS_hasPrefetchedContents;
- (void)NS_setPurged:(BOOL)a0;
- (void)NS_setVisibleTile:(BOOL)a0;
- (void)_setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (void)visibleTileStateChanged;

@end
