@class WFContextualActionContext, WFContentCollection, WFFinderConvertImageActionConfigurer;

@interface WFContextualActionRunRequest : WFWorkflowRunRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFContentCollection *input;
@property (retain, nonatomic) WFFinderConvertImageActionConfigurer *convertImageConfigurer;
@property (readonly, nonatomic) WFContextualActionContext *actionContext;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)queueIdentifier;
- (id)initWithDescriptor:(id)a0 presentationMode:(unsigned long long)a1 actionContext:(id)a2;
- (void)runRequestByPopulatingMissingParameterStateWithCompletion:(id /* block */)a0;
- (BOOL)isFinderConvertImageAction;
- (void)presentFinderConvertImageActionConfigurationPanelWithCompletion:(id /* block */)a0;
- (void)getInputWithCompletionHandler:(id /* block */)a0;

@end
