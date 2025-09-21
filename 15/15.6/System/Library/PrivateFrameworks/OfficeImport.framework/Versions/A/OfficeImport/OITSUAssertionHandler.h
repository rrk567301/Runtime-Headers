@interface OITSUAssertionHandler : NSObject

+ (void)simulateCrashWithMessage:(id)a0;
+ (id)performBlockIgnoringAssertions:(id /* block */)a0;
+ (int)_atomicIncrementAssertCount;
+ (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 isFatal:(char)a3 description:(const char *)a4;
+ (void)logBacktrace;
+ (void)logBacktraceThrottled;
+ (void)logBacktraceWithCallStackSymbols:(id)a0;
+ (id)p_performBlockIgnoringAssertions:(id /* block */)a0 onlyFatal:(char)a1;
+ (id)performBlockIgnoringFatalAssertions:(id /* block */)a0;

@end
