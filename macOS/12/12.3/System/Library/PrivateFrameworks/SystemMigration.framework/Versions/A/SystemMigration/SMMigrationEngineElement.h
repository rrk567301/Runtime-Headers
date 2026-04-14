@class NSProgress, SMMigrateEngine;

@interface SMMigrationEngineElement : NSObject

@property (weak) SMMigrateEngine *engine;
@property BOOL hasRan;
@property double progressPercentage;
@property double initialTimeEstimate;
@property (retain) NSProgress *parentProgress;
@property (retain) NSProgress *progress;

- (id)run;
- (id)description;
- (void).cxx_destruct;
- (id)resume;
- (BOOL)shouldContinue;
- (id)initWithEngine:(id)a0;
- (double)estimatedTimeToComplete;
- (unsigned long long)completedSize;
- (double)estimateTimeRemaining;
- (void)calculateProgressPercentages:(double)a0;
- (BOOL)elementSupportsResuming;

@end
