@class SCVideoStreamAnalyzer;

@interface BWSensitiveContentAnalyzerSinkNode : BWSinkNode {
    SCVideoStreamAnalyzer *_sensitiveContentAnalyzer;
}

@property (nonatomic) BOOL sensitiveContentAnalyzerEnabled;

+ (void)initialize;

- (id)nodeSubType;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithAnalyzer:(id)a0 sinkID:(id)a1 interruptionDelegate:(id)a2;

@end
