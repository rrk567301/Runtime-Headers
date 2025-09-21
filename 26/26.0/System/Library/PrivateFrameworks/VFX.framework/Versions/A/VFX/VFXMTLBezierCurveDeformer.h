@class VFXMTLMesh, NSString, VFXMTLComputePipeline;
@protocol MTLBuffer;

@interface VFXMTLBezierCurveDeformer : NSObject <VFXMTLMeshlessDeformer> {
    unsigned long long _currentFrameHash;
    struct { void /* unknown type, empty encoding */ columns[4]; } _transform;
    struct { unsigned int monotonicSubsegmentCountCubic; unsigned short segmentCountLinear; unsigned short segmentCountQuadratic; unsigned short segmentCountCubic; unsigned short segmentInfoOffsetLinear; unsigned short segmentInfoOffsetQuadratic; unsigned short segmentInfoOffsetCubic; unsigned short controlPointIndicesOffset; } _curveInfo;
    unsigned int _curveControlPointCount;
    VFXMTLMesh *_quadMesh;
    id<MTLBuffer> _quadPositionsBuffer;
    id<MTLBuffer> _quadTexcoordsBuffer;
    id<MTLBuffer> _bezierCurveInfoBuffer;
    id<MTLBuffer> _lastDeformedCurveControlPointsBuffer;
    VFXMTLComputePipeline *_buildQuadGeometryPipeline;
    VFXMTLComputePipeline *_initBezierCurveInfoPipeline;
    VFXMTLComputePipeline *_buildBezierCurveInfoPipelineLinear;
    VFXMTLComputePipeline *_buildBezierCurveInfoPipelineQuadratic;
    VFXMTLComputePipeline *_buildBezierCurveInfoPipelineCubic;
}

@property (readonly, nonatomic) VFXMTLMesh *finalMesh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)supportedOutputs;
+ (unsigned long long)requiredOutputs;
+ (BOOL)deformsControlPointsForMeshlessGeometry:(struct __CFXGeometry { } *)a0;
+ (unsigned long long)requiredInputs;

@end
