@class BWNodeOutput;

@interface BWVideoPlaybackSupportMetadataNode : BWNode {
    struct opaqueCMFormatDescription { } *_boxedMetadataFormatDescription;
    unsigned int _localIDOfLuxMetadata_BE;
    struct OpaqueCMBlockBuffer { } *_emptyMetadataSampleData;
    BOOL _previousGeneratedMetadataBufferWasEmpty;
    unsigned int _prevSceneIlluminationValue;
}

@property (readonly, nonatomic) BWNodeOutput *passthruOutput;
@property (readonly, nonatomic) BWNodeOutput *boxedMetadataOutput;

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (BOOL)hasNonLiveConfigurationChanges;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)init;

@end
