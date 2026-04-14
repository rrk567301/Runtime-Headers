@class MPSGraphCompilationDescriptor;

@interface MPSGraphExecutionDescriptor : NSObject

@property BOOL enableCommitAndContinue;
@property BOOL enableProfilingOpNames;
@property BOOL breakUpMetalEncoders;
@property (copy) id /* block */ scheduledHandler;
@property (copy) id /* block */ completionHandler;
@property BOOL waitUntilCompleted;
@property (copy) MPSGraphCompilationDescriptor *compilationDescriptor;

- (id)init;
- (void).cxx_destruct;

@end
