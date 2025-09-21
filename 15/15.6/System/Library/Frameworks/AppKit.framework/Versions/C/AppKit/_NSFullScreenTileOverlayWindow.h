@class CALayer, NSArray;

@interface _NSFullScreenTileOverlayWindow : NSPanel {
    char _ignoreEvents;
    char _applyBlur;
    CALayer *_rootLayer;
    NSArray *_tileLayers;
    char _beginningPresentation;
    char _endingPresentation;
    char _presented;
}

@property id target;
@property SEL action;
@property char applyBlur;
@property char useLiveTileRect;

- (void)dealloc;
- (void)addAuxiliaryView:(id)a0 alignedTileID:(unsigned long long)a1;
- (char)_ignoreForFullScreenTransition;
- (void)_setWindowTag;
- (void)applyPresentationFiltersWithCompletionHandler:(id /* block */)a0;
- (void)beginPresentationWithCompletionHandler:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (void)endPresentationWithCompletionHandler:(id /* block */)a0;
- (id)initWithActiveTileID:(unsigned long long)a0 coverTileID:(unsigned long long)a1 coveredWindowTileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 parentSpaceID:(unsigned long long)a3 ignoreEvents:(char)a4 screen:(id)a5 joinTileID:(unsigned long long)a6;
- (void)sendEvent:(id)a0;
- (void)updateOverlay;

@end
