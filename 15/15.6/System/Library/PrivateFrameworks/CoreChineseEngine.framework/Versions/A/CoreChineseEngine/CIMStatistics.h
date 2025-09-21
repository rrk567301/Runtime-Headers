@class NSTimer, NSMutableDictionary;

@interface CIMStatistics : NSObject

@property (retain) NSTimer *aggregatedStatisticsTimer;
@property (retain) NSMutableDictionary *inputModeToAggregateStatistic;

+ (id)sharedStatistics;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)a0;
- (void)aggregatedStatisticsTimerFired:(id)a0;
- (void)flushAggregatedStatistics;
- (void)logBooleanValue:(char)a0 forPreferenceKey:(id)a1;
- (void)logCandidateCommitted:(id)a0 partial:(char)a1 inputMode:(id)a2 selectionMethod:(id)a3;
- (void)logCandidateCommittedWithSurface:(id)a0 reading:(id)a1 partial:(char)a2 inputMode:(id)a3 selectionMethod:(id)a4;
- (void)logInputMethodUsed:(id)a0;
- (void)logIntegerValue:(unsigned long long)a0 forPreferenceKey:(id)a1;
- (void)logKeyPressed:(id)a0;
- (void)logPreferenceChangedBoolean:(char)a0 forPreferenceKey:(id)a1;
- (void)logPreferenceChangedIntegerFrom:(unsigned long long)a0 to:(unsigned long long)a1 forPreferenceKey:(id)a2;
- (void)logSortingMethodChangedBoolean:(char)a0 forInputMode:(id)a1;

@end
