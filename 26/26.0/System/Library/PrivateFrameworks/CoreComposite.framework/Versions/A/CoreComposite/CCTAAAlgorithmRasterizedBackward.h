@class CCContextDeviceGroup;
@protocol MTLDepthStencilState, MTLTexture, MTLRenderPipelineState, MTLBuffer;

@interface CCTAAAlgorithmRasterizedBackward : CCAlgorithm {
    id<MTLRenderPipelineState> _renderPipelines[4];
    id<MTLDepthStencilState> _renderDepthStencil;
    CCContextDeviceGroup *_deviceGroup;
    struct TAAAccumulationCurveParameters { int curveType; float constantAccumulationFactor; float maxAccumulationFactor; float accumulationStartRate; float accumulationPlateauRate; float accumulationSlopeModifier; void /* unknown type, empty encoding */ explicitCurvePoints[4]; struct { float edge00; float edge0; float edge1; float edge2; } clippedLogistic; struct { float a1; float a2; float bSlope; BOOL increasing; } configurableLogistic; } _taaCurveParameters;
    struct TAAAccumulationCurveConstants { float invRange; float s; float mx; float a1; float b1; float a2; float b2; struct { float smoothstepScalar; } clippedLogistic; struct { float capValue; float maxY; } configurableLogistic; } _curveConstants;
    int _coverageType;
    struct TAARasterizedUniforms { int debugView; } _uniforms;
    float _innerPeripheryOverride;
    BOOL _solEnabled;
    BOOL _occupancyDisabled;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _accumulationFactorLUT;
    struct vector<PerTileData, std::allocator<PerTileData>> { struct PerTileData *__begin_; struct PerTileData *__end_; struct PerTileData *__cap_; } _innerPeripheryTiles;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; char *__cap_; } _tileOccupancy;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _accumulationFactorsX;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _accumulationFactorsY;
    struct { double originX; double originY; double width; double height; double znear; double zfar; } _physicalPixelBounds[2];
    struct FrameData { struct TAAViewParams { struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } projMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } reprojectionMatrix; void /* unknown type, empty encoding */ screenOrigin; void /* unknown type, empty encoding */ screenSize; void /* unknown type, empty encoding */ physicalOrigin; void /* unknown type, empty encoding */ physicalSize; void /* unknown type, empty encoding */ tileOrigin; void /* unknown type, empty encoding */ tileSize; long long textureLayerIndex; float zNear; float zFar; } paramsPerEye[2]; } _oldFrameData;
    id<MTLTexture> _oldColorTexture;
    id<MTLBuffer> _oldRateMapBuffer;
    unsigned long long _texWidth;
    unsigned long long _texHeight;
    id<MTLBuffer> _quadIndices;
    id<MTLBuffer> _quadVertices[2];
    id<MTLBuffer> _perInstanceTileParams[2];
    unsigned long long _maxTilesPerViewport;
    unsigned long long _numTiles[2];
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
