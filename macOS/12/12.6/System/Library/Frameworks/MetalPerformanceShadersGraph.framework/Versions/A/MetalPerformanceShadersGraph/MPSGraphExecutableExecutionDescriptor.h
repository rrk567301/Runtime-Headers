@interface MPSGraphExecutableExecutionDescriptor : NSObject

@property BOOL enableCommitAndContinue;
@property BOOL enableProfilingOpNames;
@property BOOL breakUpMetalEncoders;
@property (copy) id /* block */ scheduledHandler;
@property (copy) id /* block */ completionHandler;
@property BOOL waitUntilCompleted;

- (id)init;
- (void).cxx_destruct;

@end
