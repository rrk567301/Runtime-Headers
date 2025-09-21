@interface WFOutputAction : WFAction

- (unsigned long long)outputBehavior;
- (id)runSource;
- (id)runningContext;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)inheritedOutputContentClassesInWorkflow:(id)a0 context:(id)a1;
- (id)outputContentClasses;
- (char)setParameterState:(id)a0 forKey:(id)a1;
- (char)hasOutputFallback;
- (void)finishRunningWithOutput:(id)a0 error:(id)a1;
- (char)getInputContentFromVariablesInParameterState:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (char)outputSurfaceIsAvailable;
- (id)outputVariableString;

@end
