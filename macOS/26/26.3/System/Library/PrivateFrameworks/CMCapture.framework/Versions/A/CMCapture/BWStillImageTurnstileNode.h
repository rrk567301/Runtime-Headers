@class BWStillImageCoordinatorNode;

@interface BWStillImageTurnstileNode : BWNode {
    BWStillImageCoordinatorNode *_stillImageCoordinator;
}

+ (void)initialize;

- (id)nodeType;
- (id)nodeSubType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithStillImageCoordinator:(id)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;

@end
