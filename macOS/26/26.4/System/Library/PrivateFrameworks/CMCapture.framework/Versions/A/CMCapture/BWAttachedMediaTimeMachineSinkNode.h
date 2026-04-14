@class NSString, NSMutableDictionary, NSArray;

@interface BWAttachedMediaTimeMachineSinkNode : BWSinkNode <BWAttachedMediaTimeMachineDelegate> {
    NSMutableDictionary *_timeMachineFrames;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timeMachineLock;
    int _timeMachineCapacity;
    struct opaqueCMFormatDescription { } *_formatDescription;
    NSArray *_attachedMediaKeys;
    NSArray *_metadataKeys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { } *)copyAttachedMediaSampleBufferForPts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 attachedMediaKey:(id)a1;
- (id)getMetadataDictionaryForPts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithTimeMachineCapacity:(int)a0 attachedMediaKeys:(id)a1 metadataKeys:(id)a2 sinkID:(id)a3;

@end
