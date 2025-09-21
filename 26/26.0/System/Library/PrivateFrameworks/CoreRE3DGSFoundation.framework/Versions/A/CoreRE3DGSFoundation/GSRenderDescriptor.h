@interface GSRenderDescriptor : NSObject

@property (nonatomic) struct shared_ptr<apple3dgs::RenderDescriptor> { struct RenderDescriptor *__ptr_; struct __shared_weak_count *__cntrl_; } impl;
@property (nonatomic) unsigned int maxCameras;
@property (nonatomic) BOOL layered;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } *projectionMatrices;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } *viewMatrices;
@property (nonatomic) struct { double x0; double x1; double x2; double x3; double x4; double x5; } *viewports;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; } *viewMappings;
@property (nonatomic) unsigned int splattingMode;
@property (nonatomic) unsigned int blendingPipeline;
@property (nonatomic) unsigned int blendingOrder;
@property (nonatomic) unsigned int depthMode;
@property (nonatomic) unsigned int splatIntegration;
@property (nonatomic) unsigned int primitiveType;
@property (nonatomic) unsigned int alphaMode;
@property (nonatomic) float alphaConstant;
@property (nonatomic) float powerThreshold;
@property (nonatomic) unsigned int degree;

- (unsigned int)alphaMode;
- (void)setAlphaMode:(unsigned int)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { double x0; double x1; double x2; double x3; double x4; double x5; } *)viewports;
- (unsigned int)primitiveType;
- (void)setPrimitiveType:(unsigned int)a0;
- (void)setViewports:(struct { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0;
- (unsigned int)degree;
- (void)setDegree:(unsigned int)a0;
- (float)powerThreshold;
- (void)setPowerThreshold:(float)a0;
- (BOOL)layered;
- (float)alphaConstant;
- (unsigned int)blendingOrder;
- (unsigned int)blendingPipeline;
- (unsigned int)depthMode;
- (id)initForMaxCameras:(unsigned int)a0;
- (unsigned int)maxCameras;
- (struct { void /* unknown type, empty encoding */ x0[4]; } *)projectionMatrices;
- (void)setAlphaConstant:(float)a0;
- (void)setBlendingOrder:(unsigned int)a0;
- (void)setBlendingPipeline:(unsigned int)a0;
- (void)setDepthMode:(unsigned int)a0;
- (void)setLayered:(BOOL)a0;
- (void)setProjectionMatrices:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0;
- (void)setSplatIntegration:(unsigned int)a0;
- (void)setSplattingMode:(unsigned int)a0;
- (void)setViewMappings:(struct { unsigned int x0; unsigned int x1; } *)a0;
- (void)setViewMatrices:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0;
- (unsigned int)splatIntegration;
- (unsigned int)splattingMode;
- (struct { unsigned int x0; unsigned int x1; } *)viewMappings;
- (struct { void /* unknown type, empty encoding */ x0[4]; } *)viewMatrices;

@end
