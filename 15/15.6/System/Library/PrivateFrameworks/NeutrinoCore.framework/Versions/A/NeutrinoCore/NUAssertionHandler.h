@protocol NUAssertionPolicyHandler;

@interface NUAssertionHandler : NSAssertionHandler

@property (retain) id<NUAssertionPolicyHandler> policy;

+ (id)currentHandler;
+ (char)runningUnitTests;

- (id)init;
- (void).cxx_destruct;
- (id)defaultPolicy;
- (id)defaultTestingPolicy;
- (void)continueAfterAssertInFunction:(id)a0 file:(id)a1 lineNumber:(unsigned long long)a2 currentlyExecutingJobName:(id)a3 description:(id)a4 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a5;
- (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 currentlyExecutingJobName:(id)a3 description:(id)a4;
- (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(unsigned long long)a2 currentlyExecutingJobName:(id)a3 description:(id)a4 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a5;
- (void)handleFailureInMethod:(SEL)a0 object:(id)a1 file:(id)a2 lineNumber:(long long)a3 currentlyExecutingJobName:(id)a4 description:(id)a5;
- (id)newAssertionInfoInMethod:(SEL)a0 object:(id)a1 function:(id)a2 file:(id)a3 lineNumber:(unsigned long long)a4 currentlyExecutingJobName:(id)a5 description:(id)a6 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a7;

@end
