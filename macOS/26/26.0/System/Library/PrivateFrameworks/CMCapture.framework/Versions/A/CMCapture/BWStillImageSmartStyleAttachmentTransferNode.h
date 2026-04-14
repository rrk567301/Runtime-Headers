@class NSString, NSMutableDictionary, BWStillImageNodeConfiguration;

@interface BWStillImageSmartStyleAttachmentTransferNode : BWNode {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    NSMutableDictionary *_inferencesFromUnstyledBuffers;
    NSMutableDictionary *_attachedMediaFromUnstyledBuffers;
    NSMutableDictionary *_attachmentsFromUnstyledBuffers;
    BOOL _hasAttachmentsFromUnstyledBuffer;
    struct opaqueCMSampleBuffer { } *_styledBuffer;
    NSString *_lastCaptureRequestIdentifier;
}

+ (void)initialize;

- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithNodeConfiguration:(id)a0;

@end
