@interface TSUAssertionHandler : NSObject

@property (class, readonly, nonatomic) char isQAFatalAssertionsEnabled;
@property (class, readonly, nonatomic) char shouldLogAssertionBacktrace;

+ (void)initialize;
+ (void)setDelegate:(id)a0;
+ (void)simulateCrashWithMessage:(id)a0;
+ (id)performBlockIgnoringAssertions:(id /* block */)a0;
+ (int)_atomicIncrementAssertCount;
+ (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 isFatal:(char)a3 description:(const char *)a4;
+ (void)logBacktraceThrottled;
+ (id)p_performBlockIgnoringAssertions:(id /* block */)a0 onlyFatal:(char)a1;
+ (id)performBlockIgnoringFatalAssertions:(id /* block */)a0;
+ (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 isFatal:(char)a3 format:(id)a4 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a5;
+ (void)logFullBacktrace;
+ (id)packedBacktraceStringWithReturnAddresses:(id)a0;
+ (void)_logBacktraceWithCallStackSymbols:(id)a0;
+ (id)packedBacktraceString;
+ (id)performBlockIgnoringAssertionsAndReturnList:(id /* block */)a0;
+ (id)performBlockIgnoringQAFatalAssertions:(id /* block */)a0;

@end
