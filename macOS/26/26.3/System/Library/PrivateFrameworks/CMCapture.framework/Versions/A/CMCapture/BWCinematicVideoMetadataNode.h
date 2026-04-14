@class BWNodeOutput;

@interface BWCinematicVideoMetadataNode : BWNode {
    struct opaqueCMFormatDescription { } *_metadataFormatDescription;
    BOOL _previousGeneratedMetadataBufferWasEmpty;
    struct OpaqueCMBlockBuffer { } *_emptyMetadataSampleData;
    unsigned int _localIDForAperture_BE;
    unsigned int _localIDForDisparity_BE;
    unsigned int _localIDForCinematographyMetadata_BE;
    unsigned int _localIDForRenderingMetadata_BE;
    unsigned int _localIDForStabilizationMetadata_BE;
    unsigned int _localIDForDialogueLevel_BE;
    unsigned int _localIDForAmbienceLevel_BE;
}

@property (readonly, nonatomic) BWNodeOutput *passthruOutput;
@property (readonly, nonatomic) BWNodeOutput *metadataOutput;

+ (void)initialize;

- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)init;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;

@end
