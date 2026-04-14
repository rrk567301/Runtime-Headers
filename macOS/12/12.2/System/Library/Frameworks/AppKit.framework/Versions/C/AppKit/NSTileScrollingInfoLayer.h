@class _NSTiledLayer, NSString, NSMutableDictionary, CALayer;

@interface NSTileScrollingInfoLayer : CALayer <CALayerDelegate> {
    NSMutableDictionary *_tiles;
    CALayer *_coverageRectLayer;
    CALayer *_activeRectLayer;
}

@property _NSTiledLayer *tileLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (BOOL)NS_isDebugOverlay;
- (void)_updateTileRepresentation;

@end
