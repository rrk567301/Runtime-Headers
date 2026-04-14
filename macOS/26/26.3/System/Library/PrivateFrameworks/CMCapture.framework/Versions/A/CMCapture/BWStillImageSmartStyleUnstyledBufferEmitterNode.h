@interface BWStillImageSmartStyleUnstyledBufferEmitterNode : BWNode

+ (void)initialize;

- (id)nodeType;
- (id)nodeSubType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)init;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
