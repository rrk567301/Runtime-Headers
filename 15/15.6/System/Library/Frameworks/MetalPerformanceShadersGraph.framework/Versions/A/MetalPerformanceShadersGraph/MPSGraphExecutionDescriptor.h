@class MPSGraphCompilationDescriptor, NSMutableArray;

@interface MPSGraphExecutionDescriptor : MPSGraphObject {
    NSMutableArray *_waitEvents;
    NSMutableArray *_signalEvents;
    NSMutableArray *_anePowerWaitEvents;
}

@property char enableCommitAndContinue;
@property char simulateANECompileFailure;
@property char simulateANELoadModelFailure;
@property char disableSynchronizeResults;
@property char disableANECaching;
@property char disableANEFallback;
@property char enableProfilingOpNames;
@property char briefProfilingOpNames;
@property char breakUpMetalEncoders;
@property char generateRuntimeExecutionReport;
@property unsigned long long maximumNumberOfEncodingThreads;
@property (copy) id /* block */ scheduledHandler;
@property (copy) id /* block */ completionHandler;
@property char waitUntilCompleted;
@property (copy) MPSGraphCompilationDescriptor *compilationDescriptor;

- (id)init;
- (void).cxx_destruct;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)signalEvent:(id)a0 atExecutionEvent:(unsigned long long)a1 value:(unsigned long long)a2;
- (void)waitForANEPrePowerUpEvent:(id)a0 value:(unsigned long long)a1;

@end
