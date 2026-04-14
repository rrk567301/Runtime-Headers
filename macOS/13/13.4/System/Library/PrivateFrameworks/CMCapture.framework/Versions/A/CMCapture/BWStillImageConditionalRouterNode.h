@interface BWStillImageConditionalRouterNode : BWFanOutNode {
    id /* block */ _shouldEmitSampleBufferDecisionProvider;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithRoutingConfiguration:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
