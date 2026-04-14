@class PTMTLDropHints, PTEffectUtil, PTDisparityFilterExponentialMovingAverageLKTMotion, PTOpticalFlow;
@protocol MTLCommandQueue, MTLTexture;

@interface PTEffectDisparityFilterLKT : PTEffectDisparityFilter {
    id<MTLCommandQueue> _commandQueue;
    PTOpticalFlow *_disparityOpticalFlow;
    PTEffectUtil *_effectUtil;
    int _frameIndex;
    PTMTLDropHints *_temporalDisparityTempDropHints;
    id<MTLTexture> _temporalDisparityTemp;
    PTDisparityFilterExponentialMovingAverageLKTMotion *_disparityFilter;
}

- (void).cxx_destruct;
- (unsigned int)reset;
- (unsigned int)prepareFilter:(id)a0 network:(id)a1;
- (unsigned int)applyFilter:(id)a0 inOutFilteredDisparity:(id)a1 updateCoefficient:(float)a2;
- (id)debugTexture;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1 disparityWidth:(unsigned long long)a2 disparityHeight:(unsigned long long)a3 effectUtil:(id)a4;

@end
