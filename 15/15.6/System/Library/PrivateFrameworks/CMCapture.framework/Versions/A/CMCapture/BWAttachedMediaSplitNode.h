@class NSArray, NSMutableDictionary, NSMutableSet;

@interface BWAttachedMediaSplitNode : BWFanOutNode {
    NSArray *_attachedMediaKeys;
    NSMutableDictionary *_attachedMediaFormatDescriptions;
    NSArray *_attachedMediaToPropagateToPrimaryOutput;
    NSMutableSet *_disabledAttachedMediaKeys;
    int _numOutputs;
    char _emitsNodeErrorsForMissingAttachedMedia;
    char _emitsDroppedSampleForMissingAttachedMedia;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (char)emitsDroppedSampleForMissingAttachedMedia;
- (char)emitsNodeErrorsForMissingAttachedMedia;
- (id)initWithAttachedMediaKeys:(id)a0;
- (id)initWithAttachedMediaKeys:(id)a0 attachedMediaToPropagateToPrimaryOutput:(id)a1;
- (char)isOutputRenderingEnabledForAttachedMediaKey:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setEmitsDroppedSampleForMissingAttachedMedia:(char)a0;
- (void)setEmitsNodeErrorsForMissingAttachedMedia:(char)a0;
- (void)setOutputRenderingEnabled:(char)a0 forAttachedMediaKey:(id)a1;

@end
