@interface WFTriggerMetricsEmitter : NSObject

+ (void)trackTriggeredAutomationWithConfiguredTrigger:(id)a0;
+ (void)trackAddAutomationActionsWithWorkflow:(id)a0 workflowReference:(id)a1;
+ (void)trackAddAutomationWithWorkflowReference:(id)a0 triggerRecord:(id)a1;

@end
