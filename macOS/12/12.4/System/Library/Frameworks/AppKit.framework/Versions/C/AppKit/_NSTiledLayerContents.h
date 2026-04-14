@class NSRecursiveLock, NSString, _NSTiledLayer, NSRegion, NSMutableDictionary;

@interface _NSTiledLayerContents : NSObject <CALayerDelegate> {
    _NSTiledLayer *_tiledLayer;
    NSRecursiveLock *_displayLock;
    NSRegion *_dirtyRegion;
    NSMutableDictionary *_tiles;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _newCoverageRect;
}

@property _NSTiledLayer *tiledLayer;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } coverageRect;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentationRect;
@property (readonly) struct CGSize { double width; double height; } tileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)CA_prepareRenderValue;
- (void *)CA_copyRenderValue;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)setPreparedContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_performWorkOnTilesOutwardFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scrollVelocity:(struct CGPoint { double x0; double x1; })a1 handler:(id /* block */)a2;
- (void)_removeNonVisibleTiles;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_findFirstValidRectStartingAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scrollVelocity:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_findRenderedRectStartingAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scrollVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)_performWorkOnTilesFromVisibleAreaOutward:(id /* block */)a0 scrollVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)purgeExcessTileContents;
- (void)addAllTilesWithNonPurgedContents;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderedRectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scrollVelocity:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)prefetchContentsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scrollVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)update:(BOOL)a0 shouldCallPrepareContent:(BOOL)a1;
- (void)updateContentsScale:(double)a0;

@end
