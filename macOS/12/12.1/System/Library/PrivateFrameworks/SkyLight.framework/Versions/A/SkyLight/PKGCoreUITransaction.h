@class NSMutableArray, PKGCoreUIRenderer;

@interface PKGCoreUITransaction : NSObject {
    PKGCoreUIRenderer *_renderer;
    NSMutableArray *_workItems;
}

- (void)dealloc;
- (void)commit;
- (id)initWithTheme:(unsigned int)a0 useAX:(BOOL)a1;
- (void)_scheduleWork:(id /* block */)a0 mainThreadWork:(id /* block */)a1;
- (id)_layerUpdateKeyForOptions:(id)a0;
- (void)updateLayer:(id)a0 options:(id)a1;

@end
