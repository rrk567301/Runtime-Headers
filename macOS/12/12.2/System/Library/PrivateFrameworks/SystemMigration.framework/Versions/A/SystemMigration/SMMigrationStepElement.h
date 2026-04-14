@class NSArray;

@interface SMMigrationStepElement : SMMigrationEngineElement

@property unsigned long long stepFinishedBytes;
@property (weak) NSArray *steps;
@property unsigned long long phase;

- (id)run;
- (id)description;
- (void).cxx_destruct;
- (id)errorWithMessage:(id)a0;
- (double)estimatedTimeToComplete;
- (unsigned long long)completedSize;
- (double)estimateTimeRemaining;
- (id)phaseNameForPhase:(unsigned long long)a0;
- (id)stepErrorWithException:(id)a0;
- (void)calculateProgressPercentages:(double)a0;
- (void)setProgressPortionsForStep:(id)a0;
- (id)initWithEngine:(id)a0 steps:(id)a1 phase:(unsigned long long)a2;
- (BOOL)elementSupportsResuming;

@end
