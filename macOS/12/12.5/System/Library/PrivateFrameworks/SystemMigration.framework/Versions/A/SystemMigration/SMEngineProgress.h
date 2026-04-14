@class NSObject, NSMutableDictionary, SMEngineProgressPhase;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SMEngineProgress : NSObject

@property double smoothedItemRate;
@property double smoothedSizeRate;
@property double processStartTime;
@property double lastCalculatedTimeRemaining;
@property unsigned long long lastPercentCompleted;
@property unsigned long long lastPercentCompletedByCount;
@property unsigned long long lastPercentCompletedBySize;
@property double currentPhaseStartTime;
@property double currentPhaseLastUpdateTime;
@property double currentPhaseLastSizeUpdateTime;
@property double currentPhaseLastItemUpdateTime;
@property (retain) SMEngineProgressPhase *currentPhase;
@property (retain) NSMutableDictionary *allPhases;
@property (retain) NSObject<OS_dispatch_queue> *phaseQueue;
@property (copy) id /* block */ progressCallbackBlock;
@property (retain) NSObject<OS_dispatch_source> *progressTimer;
@property double oldProgressLatestTimeEstimate;
@property BOOL itemCountIsUnreliable;

+ (id)sharedEngineProgress;

- (id)init;
- (void).cxx_destruct;
- (id)currentStatus;
- (void)registerUpdateBlock:(id /* block */)a0;
- (void)registerCurrentPhaseProgressNewItemsCompleted:(unsigned long long)a0;
- (void)registerPhaseProgress:(id)a0 newItemsCompleted:(unsigned long long)a1 newSizeCompleted:(unsigned long long)a2;
- (double)lerpFromPosition:(double)a0 toTarget:(double)a1;
- (void)updateComparisonCSV:(double)a0;
- (void)registerNewPhase:(id)a0;
- (void)enterPhase:(id)a0;
- (void)registerPhaseProgress:(id)a0 newItemsCompleted:(unsigned long long)a1;
- (void)registerPhaseProgress:(id)a0 newTimingItemsCompleted:(unsigned long long)a1;
- (void)registerCurrentPhaseProgressNewItemsCompleted:(unsigned long long)a0 newSizeCompleted:(unsigned long long)a1;
- (void)registerCurrentPhaseProgressNewTotalSizeCompleted:(unsigned long long)a0;
- (void)latestTimeEstimateFromOldProgress:(double)a0;

@end
