@class BWStillImageCoordinatorNode;

@interface BWStillImageTurnstileNode : BWNode {
    BWStillImageCoordinatorNode *_stillImageCoordinator;
}

+ (void)initialize;

- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithStillImageCoordinator:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;

@end
