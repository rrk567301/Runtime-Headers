@protocol PFAssertionPolicyHandler;

@interface PFAssertionHandler : NSAssertionHandler

@property (retain) id<PFAssertionPolicyHandler> policy;

+ (id)currentHandler;
+ (char)runningUnitTests;
+ (void)install;
+ (char)runningUnderDebugger;

- (id)init;
- (void).cxx_destruct;
- (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 description:(id)a3;
- (void)handleFailureInMethod:(SEL)a0 object:(id)a1 file:(id)a2 lineNumber:(long long)a3 description:(id)a4;
- (id)defaultPolicy;
- (void)_install;
- (void)continueAfterAssertInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 description:(id)a3 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a4;
- (id)defaultTestingPolicy;
- (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 description:(id)a3 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a4;
- (id)newAssertionInfoInMethod:(SEL)a0 object:(id)a1 function:(id)a2 file:(id)a3 lineNumber:(long long)a4 description:(id)a5 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a6;

@end
