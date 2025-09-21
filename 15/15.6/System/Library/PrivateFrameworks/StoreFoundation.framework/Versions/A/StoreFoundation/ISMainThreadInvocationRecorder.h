@interface ISMainThreadInvocationRecorder : ISInvocationRecorder

@property (nonatomic) char waitUntilDone;

- (void)invokeInvocation:(id)a0;

@end
