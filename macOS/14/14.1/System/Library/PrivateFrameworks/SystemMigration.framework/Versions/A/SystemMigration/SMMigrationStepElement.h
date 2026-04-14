@class NSArray;

@interface SMMigrationStepElement : SMMigrationEngineElement

@property unsigned long long stepFinishedBytes;
@property (weak) NSArray *steps;
@property unsigned long long phase;

- (id)description;
- (id)run;
- (void).cxx_destruct;
- (id)errorWithMessage:(id)a0;
- (void)calculateProgressPercentages:(double)a0;
- (unsigned long long)completedSize;
- (BOOL)elementSupportsResuming;
- (double)estimateTimeRemaining;
- (double)estimatedTimeToComplete;
- (id)initWithEngine:(id)a0 steps:(id)a1 phase:(unsigned long long)a2;
- (id)phaseNameForPhase:(unsigned long long)a0;
- (void)setProgressPortionsForStep:(id)a0;
- (id)stepErrorWithException:(id)a0;

@end
