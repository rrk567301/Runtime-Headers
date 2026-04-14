@class VSTProxyRendererCullingOptions, NSArray, VSTProxyRendererDynamicPrimitiveScalingOptions, VSTProxyRendererPrimitiveOptions, VSTProxyRendererResolutionOptions, VSTProxyRendererRasterizationRateInfo;

@interface VSTProxyRendererUpdateInfo : NSObject

@property (nonatomic) struct DrawOptions { int splatVisibilityPolicy; float splatVisibilityRecordingFrequency; int stopAfterStage; int debugMode; float triangleSizeOffset; float polySizeX; float primitiveScale; float splatScale; float gaussianSplatOpacity; float minOpacity; struct float3x3 { void /* unknown type, empty encoding */ columns[3]; } splatColorCorrection; int filter; float filterSize; struct optional<vst::splat::BaseRenderer::DynamicPrimitiveScalingOptions> { union { char __null_state_; struct DynamicPrimitiveScalingOptions { void /* unknown type, empty encoding */ gazeOrigin; void /* unknown type, empty encoding */ gazeDirection; float falloffStartAngle; float falloffEndAngle; float falloffScale; } __val_; } ; BOOL __engaged_; } dynamicPrimitiveScalingOptions; unsigned int minOverdraw; unsigned int maxOverdraw; float minOcclusion; float maxOcclusion; void /* unknown type, empty encoding */ heatmapMinColor; void /* unknown type, empty encoding */ heatmapMaxColor; float batchDistributionExponent; unsigned char overdrawLimit; struct optional<float __attribute__((ext_vector_type(2)))> { union { char __null_state_; void /* unknown type, empty encoding */ __val_; } ; BOOL __engaged_; } selectedPixel; BOOL useTightlyFittingRenderTargets; unsigned short proxyDensityScale; BOOL dilateProxyBorder; int depthSortingMode; } drawOptions;
@property (retain, nonatomic) NSArray *views;
@property (retain, nonatomic) NSArray *renderTargets;
@property (retain, nonatomic) VSTProxyRendererResolutionOptions *resolutionOptions;
@property (retain, nonatomic) VSTProxyRendererPrimitiveOptions *primitiveOptions;
@property (retain, nonatomic) VSTProxyRendererRasterizationRateInfo *rasterizationRateInfo;
@property (retain, nonatomic) VSTProxyRendererDynamicPrimitiveScalingOptions *dynamicPrimitiveScalingOptions;
@property (retain, nonatomic) NSArray *volumesInfo;
@property (retain, nonatomic) VSTProxyRendererCullingOptions *cullingOptions;
@property (retain, nonatomic) NSArray *volumesProxyBuffers;
@property (nonatomic) BOOL dumpFrame;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
