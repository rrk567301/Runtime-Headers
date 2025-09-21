@interface BWStillImageSmartStyleUnstyledBufferEmitterNode : BWNode

+ (void)initialize;

- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (id)init;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;

@end
