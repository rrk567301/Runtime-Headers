@class BWNodeOutput;

@interface BWCameraInfoMetadataNode : BWNode {
    BOOL _generateLivePhotosMetadata;
    struct opaqueCMFormatDescription { } *_boxedMetadataFormatDescription;
    struct opaqueCMFormatDescription { } *_formatSpecificBoxedMetadataFormatDescription;
    struct opaqueCMFormatDescription { } *_basicBoxedMetadataFormatDescription;
    BOOL _previousGeneratedMetadataBufferWasEmpty;
    struct OpaqueCMBlockBuffer { } *_emptyMetadataSampleData;
    struct { int width; int height; } _videoDimensions;
    unsigned int _localIDForLivePhotosMetadata_BE;
    unsigned int _localIDForOpticalCenterMetadata_BE;
    BOOL _generateGreenGhostMetadata;
    BOOL _updateBoxedMetadataFormatDescriptionForFirstBuffer;
}

@property (readonly, nonatomic) BWNodeOutput *passthruOutput;
@property (readonly, nonatomic) BWNodeOutput *boxedMetadataOutput;

+ (void)initialize;

- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)dealloc;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initForLivePhotosMetadata:(BOOL)a0 generateDebugMetadata:(BOOL)a1 generateMotionMetadata:(BOOL)a2;

@end
