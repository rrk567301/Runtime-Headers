@class PTDisparityFilterColorSimilarity;
@protocol MTLTexture, MTLCommandQueue;

@interface PTEffectDisparityFilterColorSimilarities : PTEffectDisparityFilter {
    int _frameIndex;
    id<MTLTexture> _colorBuffersBlurred[2];
    id<MTLTexture> _filteredDisparity[2];
    id<MTLCommandQueue> _commandQueue;
    PTDisparityFilterColorSimilarity *_disparityFilter;
    id<MTLTexture> _inputRGB;
}

- (void).cxx_destruct;
- (unsigned int)reset;
- (unsigned int)prepareFilter:(id)a0 network:(id)a1;
- (unsigned int)applyFilter:(id)a0 inOutFilteredDisparity:(id)a1 updateCoefficient:(float)a2;
- (id)debugTexture;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1 library:(id)a2 pipelineLibrary:(id)a3 disparityWidth:(unsigned long long)a4 disparityHeight:(unsigned long long)a5 effectUtil:(id)a6;

@end
