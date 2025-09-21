@class BWNodeOutput;

@interface BWSmartStyleInfoMetadataNode : BWNode {
    struct opaqueCMFormatDescription { } *_boxedMetadataFormatDescription;
    BOOL _currentRecordingSupportsReversibility;
    BOOL _previousGeneratedMetadataBufferWasEmpty;
    struct OpaqueCMBlockBuffer { } *_emptyMetadataSampleData;
    unsigned int _localIDForSmartStyleInfoPlistMetadata_BE;
}

@property (readonly, nonatomic) BWNodeOutput *passthruOutput;
@property (readonly, nonatomic) BWNodeOutput *boxedMetadataOutput;

+ (void)initialize;

- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeSubType;
- (BOOL)hasNonLiveConfigurationChanges;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)dealloc;
- (id)init;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;

@end
