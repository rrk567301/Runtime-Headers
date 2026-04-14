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
- (id)resume;
- (void).cxx_destruct;
- (BOOL)shouldContinue;
- (id)initWithEngine:(id)a0;
- (void)calculateProgressPercentages:(double)a0;
- (BOOL)elementSupportsResuming;
- (unsigned long long)completedSize;
- (double)estimatedTimeToComplete;
- (double)estimateTimeRemaining;

@end
