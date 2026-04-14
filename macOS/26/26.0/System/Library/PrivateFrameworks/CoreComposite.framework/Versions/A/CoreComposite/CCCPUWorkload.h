@class CCCPUPerformanceCounterSnapshot, NSMutableArray;

@interface CCCPUWorkload : NSObject

@property (retain, nonatomic) NSMutableArray *cyclesInMillions;
@property (retain, nonatomic) NSMutableArray *instructionsInMillions;
@property (retain, nonatomic) NSMutableArray *timeInMilliseconds;
@property (retain, nonatomic) CCCPUPerformanceCounterSnapshot *beginSnapshot;
@property (retain, nonatomic) CCCPUPerformanceCounterSnapshot *endSnapshot;
@property (nonatomic) BOOL started;

+ (id)comparativeHistogramsForWorkload:(id)a0 label:(id)a1 otherWorkload:(id)a2 otherLabel:(id)a3;
+ (id)comparativeSummaryForWorkload:(id)a0 label:(id)a1 baselineWorkload:(id)a2 baselineLabel:(id)a3;

- (void)start;
- (id)summary;
- (void)stop;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)histograms;

@end
