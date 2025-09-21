@class NSString, WFWorkflow;

@interface WFWorkflowTypeResource : WFResource <WFWorkflowReferencing>

@property (weak, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)mustBeAvailableForDisplay;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)refreshAvailability;
- (char)workflowTypesAreValid;

@end
