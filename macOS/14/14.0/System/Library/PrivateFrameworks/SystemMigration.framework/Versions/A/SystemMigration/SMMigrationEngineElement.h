@class NSProgress, SMMigrateEngine;

@interface SMMigrationEngineElement : NSObject

@property (weak) SMMigrateEngine *engine;
@property BOOL hasRan;
@property double progressPercentage;
@property double initialTimeEstimate;
@property (retain) NSProgress *parentProgress;
@property (retain) NSProgress *progress;

- (id)description;
- (id)run;
- (void).cxx_destruct;
- (id)resume;
- (BOOL)shouldContinue;
- (id)initWithEngine:(id)a0;
- (void)calculateProgressPercentages:(double)a0;
- (unsigned long long)completedSize;
- (BOOL)elementSupportsResuming;
- (double)estimateTimeRemaining;
- (double)estimatedTimeToComplete;

@end
