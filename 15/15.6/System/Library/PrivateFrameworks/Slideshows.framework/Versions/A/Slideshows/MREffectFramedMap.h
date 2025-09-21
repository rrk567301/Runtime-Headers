@class NSOperationQueue, NSMutableSet, MRImage;

@interface MREffectFramedMap : MREffectFramedSlide {
    NSMutableSet *mTiles;
    double mZoomLevel;
    struct CGPoint { double x; double y; } mCenter;
    char mIsPanning;
    struct CGPoint { double x; double y; } mStartCenter;
    NSOperationQueue *mTileQueue;
    MRImage *mMapImage;
}

- (void)cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (double)pzrEnd:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_currentRect;
- (void)_fetchMapTile:(id)a0;
- (int)_mapScale;
- (void)_setZoom:(double)a0;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (char)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (char)isLoadedForTime:(double)a0;
- (char)isNative3D;
- (void)loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2 now:(char)a3;
- (char)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (double)pzrCancel:(id)a0;
- (double)pzrStart:(id)a0;
- (double)pzrUpdate:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
