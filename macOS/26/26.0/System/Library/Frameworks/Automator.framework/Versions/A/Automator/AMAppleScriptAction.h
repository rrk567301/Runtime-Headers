@class OSAScript;

@interface AMAppleScriptAction : AMBundleAction

@property (copy, nonatomic) OSAScript *script;

- (void)updateParameters;
- (void)activated;
- (id)initWithBundle:(id)a0;
- (id)init;
- (void)willBecomeActive;
- (void).cxx_destruct;
- (void)closed;
- (id)resolvedParameters;
- (void)willOpen;
- (void)_closed;
- (id)_emptyInput;
- (void)_executeWithInfo:(id)a0;
- (void)_richTextOutputFromScriptOnMainThreadWithDict:(id)a0;
- (id)executeScript:(id)a0 withParameter:(id)a1 error:(id *)a2;
- (void)opened;
- (void)parametersUpdated;
- (id)richTextOutput;
- (id)runWithInput:(id)a0 error:(id *)a1;

@end
