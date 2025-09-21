@class NSMutableDictionary, TSCHMultiDataChartRepElementIndex, NSSet, CALayer;

@interface TSCHMultiDataChartRep : TSCHChartRep {
    CALayer *_rootLayer;
    CALayer *_elementsContainerLayer;
    char _renderingBackgroundLayer;
    char _renderingElementShapeLayer;
    char _renderingElementLabelsLayer;
    char _renderingDataSetNameLayer;
    char _renderingReferenceLineLayer;
    char _animatedLayersNeedUpdate;
    char _shouldAnimateLabelsQuickly;
    char _isAnimatingForBuilds;
    unsigned long long _elementLayersMultiDataSetIndex;
    int _gridDirection;
    NSMutableDictionary *_indexedElements;
    TSCHMultiDataChartRepElementIndex *_currentRepElementIndex;
    CALayer *_dataSetNameLayer;
    CALayer *_referenceLinesContainerLayer;
    NSSet *_referenceLinesToRender;
    NSSet *_referenceLineLabelsSearchSelectionsToRender;
    NSMutableDictionary *_layerIdToLayerMap;
    NSMutableDictionary *_previousOutsideBodyBounds;
}

@property (readonly, nonatomic) char shouldDisableMultiDataControls;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didEndZooming;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)willBeginZooming;
- (char)needsAnimationForAnimationInfo:(id)a0;
- (id)p_elementLayers;
- (char)frameInUnscaledCanvasNeedsPaddingForShadows;
- (id)imageFromFill:(id)a0 forResolutionWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toRepElementTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 skipIntegral:(char)a3 returningFillFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (void)invalidateAnimationState;
- (char)isHorizontalChart;
- (id)layerIdToLayerMap;
- (id)p_chartModel;
- (id)previousOutsideBodyBounds;
- (char)shouldUseLegendLayerForLayerBasedRep;

@end
