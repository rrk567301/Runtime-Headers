@class NSString, CCMTLBufferAllocator, CCMTLBuffer2D;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface CCDisplayCorrectionWarpProvider : NSObject <CCVisitable> {
    long long _algorithm;
    unsigned long long _reprojectionMode;
    void /* unknown type, empty encoding */ _meshSize;
    struct CCDisplayCorrectionWarpFlags { BOOL requireDisplayVisibilitySDF; BOOL generateMeshDepth; BOOL compensateForRollingShutter; BOOL computeYStart; } _warpFlags;
    struct unique_ptr<CCConstantEncoder, std::default_delete<CCConstantEncoder>> { struct CCConstantEncoder *__ptr_; } _functionConstants[2];
    struct DepthParameters { struct { void /* unknown type, empty encoding */ columns[3]; } intrinsics; } _depthParameters;
    CCMTLBufferAllocator *_allocator;
    CCMTLBuffer2D *_meshBuffer;
    CCMTLBuffer2D *_ignoreFlagsBuffer;
    struct { struct { int value; } identity; long long offset; unsigned long long size; unsigned long long usage; } _yStartBuffer;
    unsigned int _yStartBufferElementsCount;
    id<MTLComputePipelineState> _computePipelineStates[2];
    struct { struct { int value; } identity; long long offset; unsigned long long size; unsigned long long usage; } _argumentBufferRegion;
    id<MTLBuffer> _argumentBuffer;
    struct DepthParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; } *_displayDepthParams;
    struct WarpParameters { struct { void /* unknown type, empty encoding */ x0[4]; } x0; struct { } x1; struct { } x2; float x3; } *_warpParams;
    struct ZoomParameters { float x0; void /* unknown type, empty encoding */ x1[4]; void /* unknown type, empty encoding */ x2[4]; float x3; } *_zoomParams;
    struct OutputGridParameters { float x0; struct BoraGridAlignment { int x0; int x1; } x1; } *_outputGridParams;
    struct HomographyParameters { float x0; } *_homographyParams;
    void *_textures;
    struct DisplayCorrectionData { char **x0; short *x1; } *_data;
    struct TextureAndUsageArray { int count; struct TextureAndUsage { id<MTLTexture> texture; unsigned long long usage; } elements[16]; } _texturesUsedInArgumentBuffer;
    struct WarpParameters { struct { void /* unknown type, empty encoding */ columns[4]; } displayToCamera; struct { void /* unknown type, empty encoding */ vector; } cameraToTopOfFrame; struct { void /* unknown type, empty encoding */ vector; } cameraToBottomOfFrame; void /* unknown type, empty encoding */ cameraTanAngleToUVOffsetScale; void /* unknown type, empty encoding */ cameraTanAngleToNormalizedValidRangeOffsetScale; float cameraHeight; } _warpParameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acceptVisitor:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
