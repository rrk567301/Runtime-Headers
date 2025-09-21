@class NSString, BronzeMtlCmdBuffer, MTLIOAccelResource;
@protocol MTLDevice;

@interface Bronze_MtlVideoCmdEncoder : _MTLCommandEncoder <MTLVideoCommandEncoderSPI> {
    struct BronzeVideoCmdEncoderMembersRec { BronzeMtlCmdBuffer *cmdBuffer; struct BronzeCmdBufInfoRec *hwCmdBufInfo; struct BronzeResourceBindInfoRec { MTLIOAccelResource *rsrc; unsigned int index; unsigned int usageFlags; } currentResources[4]; unsigned int imageWidth; unsigned int imageHeight; unsigned int sessionId; unsigned int feedBackIndex; unsigned int qp; unsigned int frameNumber; unsigned int searchRangeX; unsigned int searchRangeY; MTLIOAccelResource *motionEstimationBuffer; } m_members;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
