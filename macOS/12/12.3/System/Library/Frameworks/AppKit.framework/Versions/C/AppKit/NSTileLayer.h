@interface NSTileLayer : CALayer {
    unsigned char _isVisibleTile : 1;
    unsigned char _ignoreLayoutCall : 1;
    unsigned char _purged : 1;
    unsigned char _contentsAreInvalid : 1;
}

- (id)init;
- (void)display;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (void)_setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)NS_hasPrefetchedContents;
- (BOOL)NS_isVisibleTile;
- (void)NS_prefetchContentsIfNecessary;
- (BOOL)NS_isPurged;
- (void)NS_setPurged:(BOOL)a0;
- (void)NS_setVisibleTile:(BOOL)a0;
- (void)visibleTileStateChanged;

@end
