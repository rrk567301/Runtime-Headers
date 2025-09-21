@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {
    _CUIPSDSublayerInfo *_sublayerInfo;
}

- (void)dealloc;
- (char)isOpen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)layerEnumerator;
- (char)_isGroupType:(unsigned int)a0;
- (void)enumerateLayersUsingBlock:(id /* block */)a0;
- (id)initWithImageRef:(id)a0 layerIndex:(unsigned int)a1;
- (char)isGroupEnd;
- (char)isGroupStart;
- (char)isLayerGroup;
- (id)layerNames;
- (id)layerRefAtIndex:(unsigned int)a0;
- (unsigned int)numberOfLayers;

@end
