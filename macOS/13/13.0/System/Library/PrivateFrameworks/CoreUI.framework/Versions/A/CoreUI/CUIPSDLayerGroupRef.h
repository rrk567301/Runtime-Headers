@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {
    _CUIPSDSublayerInfo *_sublayerInfo;
}

- (void)dealloc;
- (BOOL)isOpen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)layerEnumerator;
- (void)enumerateLayersUsingBlock:(id /* block */)a0;
- (id)layerRefAtIndex:(unsigned int)a0;
- (unsigned int)numberOfLayers;
- (id)layerNames;
- (BOOL)isLayerGroup;
- (id)initWithImageRef:(id)a0 layerIndex:(unsigned int)a1;
- (BOOL)_isGroupType:(unsigned int)a0;
- (BOOL)isGroupStart;
- (BOOL)isGroupEnd;

@end
