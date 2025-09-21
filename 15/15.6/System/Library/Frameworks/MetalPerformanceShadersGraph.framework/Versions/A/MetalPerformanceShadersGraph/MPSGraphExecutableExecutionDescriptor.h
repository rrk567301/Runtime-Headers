@class NSString, NSMutableDictionary, NSMutableArray, MPSGraphExecutableEntryPointToSymbolAndFileNameMap;

@interface MPSGraphExecutableExecutionDescriptor : MPSGraphObject <NSCopying> {
    NSMutableArray *_waitEvents;
    NSMutableArray *_signalEvents;
    NSMutableArray *_anePowerWaitEvents;
    id /* block */ _profilingCallback;
    NSMutableDictionary *_profilingDictionary;
    unsigned long long _profilingBitmap;
}

@property char enableCommitAndContinue;
@property (copy) id /* block */ scheduledGraphHandler;
@property (copy) id /* block */ completionGraphHandler;
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
@property (readonly) unsigned long long numberOfCommitsByMPSGraph;
@property (retain) NSString *entryFunctionName;
@property (retain) MPSGraphExecutableEntryPointToSymbolAndFileNameMap *perEntryPointToSymbolAndFileNameMap;
@property (copy) id /* block */ scheduledHandler;
@property (copy) id /* block */ completionHandler;
@property char waitUntilCompleted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)requestProfilingStatsWithDictionary:(id)a0 profilingCallback:(id /* block */)a1;
- (id)initWithGraphExecutionDescriptor:(id)a0;
- (void)signalEvent:(id)a0 atExecutionEvent:(unsigned long long)a1 value:(unsigned long long)a2;
- (void)waitForANEPrePowerUpEvent:(id)a0 value:(unsigned long long)a1;

@end
