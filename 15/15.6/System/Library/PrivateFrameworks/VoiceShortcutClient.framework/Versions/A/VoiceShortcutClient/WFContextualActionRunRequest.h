@class WFContextualActionContext, WFContentCollection, WFContextualAction;

@interface WFContextualActionRunRequest : WFWorkflowRunRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) WFContentCollection *input;
@property (readonly, nonatomic) WFContextualAction *action;
@property (readonly, nonatomic) WFContextualActionContext *actionContext;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)queueIdentifier;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (id)initWithAction:(id)a0 actionContext:(id)a1;

@end
