@class NSDictionary, NSArray;

@interface BWMetadataSynchronizerNode : BWNode {
    NSDictionary *_syncMetadataByPortType;
    NSArray *_propagateSampleBufferAttachmentKeys;
    NSArray *_propagateSampleBufferMetadataDictKeys;
    NSArray *_syncOnlyIfMetadataEnabledForKeys;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    struct { id x0; struct opaqueCMSimpleQueue *x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } *_inputsStorage;
    int _numEODMessagesReceived;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithArraysOfMetadataInputs:(id)a0 propagateSampleBufferAttachmentKeys:(id)a1 propagateSampleBufferMetadataDictKeys:(id)a2 syncMetadataByPortType:(id)a3 syncOnlyIfMetadataEnabledForKeys:(id)a4;
- (id)initWithMetadataInputs:(id)a0 propagateSampleBufferAttachmentKeys:(id)a1 propagateSampleBufferMetadataDictKeys:(id)a2 syncMetadataByPortType:(id)a3 syncOnlyIfMetadataEnabledForKeys:(id)a4;

@end
