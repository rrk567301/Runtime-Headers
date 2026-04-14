@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {
    _CUIPSDSublayerInfo *_sublayerInfo;
}

- (void)dealloc;
- (BOOL)isOpen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (unsigned int)numberOfLayers;
- (id)layerRefAtIndex:(unsigned int)a0;
- (BOOL)isLayerGroup;
- (BOOL)isGroupEnd;
- (BOOL)isGroupStart;
- (id)layerEnumerator;
- (void)enumerateLayersUsingBlock:(id /* block */)a0;
- (id)initWithImageRef:(id)a0 layerIndex:(unsigned int)a1;
- (id)layerNames;
- (BOOL)_isGroupType:(unsigned int)a0;

@end
