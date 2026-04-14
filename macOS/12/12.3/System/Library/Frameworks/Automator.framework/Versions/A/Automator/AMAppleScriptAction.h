@class OSAScript;

@interface AMAppleScriptAction : AMBundleAction

@property (copy, nonatomic) OSAScript *script;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (void)closed;
- (void)activated;
- (void)_closed;
- (void)updateParameters;
- (id)resolvedParameters;
- (void)willOpen;
- (void)willBecomeActive;
- (id)richTextOutput;
- (id)runWithInput:(id)a0 error:(id *)a1;
- (id)_emptyInput;
- (void)parametersUpdated;
- (void)opened;
- (id)executeScript:(id)a0 withParameter:(id)a1 error:(id *)a2;
- (void)_executeWithInfo:(id)a0;
- (void)_richTextOutputFromScriptOnMainThreadWithDict:(id)a0;

@end
