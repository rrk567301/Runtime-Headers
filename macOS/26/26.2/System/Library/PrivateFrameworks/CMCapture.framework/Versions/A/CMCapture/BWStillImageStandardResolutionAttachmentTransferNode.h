@class NSString, NSMutableDictionary, BWStillImageNodeConfiguration;

@interface BWStillImageStandardResolutionAttachmentTransferNode : BWNode {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    NSMutableDictionary *_inferencesFromStandardResBuffer;
    NSMutableDictionary *_attachedMediasFromStandardResBuffer;
    NSMutableDictionary *_attachmentsFromStandardResBuffer;
    BOOL _hasAttachmentsFromStandardResBuffer;
    struct opaqueCMSampleBuffer { } *_enhancedResolutionBuffer;
    NSString *_lastCaptureRequestIdentifier;
    long long _lastSettingsID;
    struct { int width; int height; } _standardResBufferDimensions;
}

+ (void)initialize;

- (id)nodeSubType;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithNodeConfiguration:(id)a0;

@end
