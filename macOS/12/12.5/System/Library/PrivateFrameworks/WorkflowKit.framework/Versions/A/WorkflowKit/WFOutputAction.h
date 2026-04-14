@interface WFOutputAction : WFAction

- (id)runSource;
- (unsigned long long)outputBehavior;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputContentClasses;
- (id)runningContext;
- (BOOL)hasOutputFallback;
- (BOOL)outputSurfaceIsAvailable;
- (void)finishRunningWithOutput:(id)a0 error:(id)a1;
- (BOOL)getInputContentFromVariablesInParameterState:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (id)outputVariableString;

@end
