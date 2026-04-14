@class WFContextualActionContext, WFContentCollection, WFContextualAction;

@interface WFContextualActionRunRequest : WFWorkflowRunRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WFContentCollection *input;
@property (readonly, nonatomic) WFContextualAction *action;
@property (readonly, nonatomic) WFContextualActionContext *actionContext;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)queueIdentifier;
- (id)initWithAction:(id)a0 actionContext:(id)a1;
- (void)getInputWithCompletionHandler:(id /* block */)a0;

@end
