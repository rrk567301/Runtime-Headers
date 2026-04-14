@class NSMutableArray;

@interface MPSGraphExecutableExecutionDescriptor : NSObject <NSCopying> {
    NSMutableArray *_waitEvents;
    NSMutableArray *_signalEvents;
    NSMutableArray *_anePowerWaitEvents;
}

@property BOOL enableCommitAndContinue;
@property (copy) id /* block */ scheduledGraphHandler;
@property (copy) id /* block */ completionGraphHandler;
@property BOOL enableProfilingOpNames;
@property BOOL briefProfilingOpNames;
@property BOOL breakUpMetalEncoders;
@property (copy) id /* block */ scheduledHandler;
@property (copy) id /* block */ completionHandler;
@property BOOL waitUntilCompleted;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)signalEvent:(id)a0 atExecutionEvent:(unsigned long long)a1 value:(unsigned long long)a2;
- (void)waitForANEPrePowerUpEvent:(id)a0 value:(unsigned long long)a1;
- (id)initWithGraphExecutionDescriptor:(id)a0;

@end
