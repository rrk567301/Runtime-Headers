@class WFWorkflowControllerState;

@interface WFWorkflowControllerStateRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) WFWorkflowControllerState *state;

- (void).cxx_destruct;
- (id)initWithState:(id)a0;

@end
