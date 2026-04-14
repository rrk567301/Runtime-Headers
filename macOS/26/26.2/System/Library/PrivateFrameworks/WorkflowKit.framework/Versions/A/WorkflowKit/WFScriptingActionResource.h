@class WFWorkflow, NSString, WFSecuredPreferences;

@interface WFScriptingActionResource : WFResource <WFWorkflowReferencing>

@property (readonly, nonatomic) WFSecuredPreferences *securedPreferences;
@property (weak, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)mustBeAvailableForDisplay;

@end
