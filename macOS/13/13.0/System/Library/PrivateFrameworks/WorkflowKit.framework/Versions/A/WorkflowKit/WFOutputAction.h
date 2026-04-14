@interface WFOutputAction : WFAction

- (id)runSource;
- (unsigned long long)outputBehavior;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)inheritedOutputContentClassesInWorkflow:(id)a0 context:(id)a1;
- (id)outputContentClasses;
- (BOOL)hasOutputFallback;
- (id)runningContext;
- (BOOL)getInputContentFromVariablesInParameterState:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)finishRunningWithOutput:(id)a0 error:(id)a1;
- (BOOL)outputSurfaceIsAvailable;
- (id)outputVariableString;

@end
