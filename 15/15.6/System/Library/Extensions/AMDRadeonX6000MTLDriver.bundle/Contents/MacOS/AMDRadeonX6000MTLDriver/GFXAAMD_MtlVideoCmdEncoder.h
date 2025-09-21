@class NSString, GFXAAMD_MtlCmdBuffer, MTLIOAccelResource;
@protocol MTLDevice;

@interface GFXAAMD_MtlVideoCmdEncoder : _MTLCommandEncoder <MTLVideoCommandEncoderSPI> {
    struct AMD_MtlVideoCmdEncoderMembersRec { GFXAAMD_MtlCmdBuffer *cmdBuffer; struct AMD_HwCmdBufInfoRec *hwCmdBufInfo; struct AMD_ResourceBindInfoRec { MTLIOAccelResource *rsrc; unsigned int index; unsigned int usageFlags; } currentResources[4]; unsigned int imageWidth; unsigned int imageHeight; unsigned int sessionId; unsigned int feedBackIndex; unsigned int taskId; unsigned int qp; unsigned int frameNumber; unsigned int searchRangeX; unsigned int searchRangeY; MTLIOAccelResource *motionEstimationBuffer; } m_members;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endEncoding;
- (void)generateMotionVectorsForTexture:(id)a0 previousTexture:(id)a1 resultBuffer:(id)a2 bufferOffset:(unsigned long long)a3;
- (void)setMotionEstimationPipeline:(id)a0;
- (void)updateFence:(id)a0;
- (void)waitForFence:(id)a0;
- (id)initWithCommandBuffer:(id)a0;

@end
