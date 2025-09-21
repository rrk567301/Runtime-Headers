@class _PASLock, SGM2HarvestCost;

@interface SGHarvestQueueMetrics : NSObject {
    _PASLock *_guardedData;
    SGM2HarvestCost *_harvestCostMetrics;
}

+ (id)overridePET2InstanceForTesting:(id)a0;

- (void).cxx_destruct;
- (int)_documentSourceForBundleId:(id)a0;
- (void)endHarvest;
- (void)endTimer:(id)a0 significantWork:(char)a1;
- (id)harvestTimerForName:(id)a0;
- (id)harvestTimes;
- (id)initRealtime:(id)a0 wasNoBudgetItem:(char)a1;
- (id)initWithBundleIdentifier:(id)a0 highPriority:(char)a1 harvestedOnBattery:(char)a2 receivedOnBattery:(char)a3 harvestSource:(int)a4;
- (void)startHarvest;
- (void)startTimer:(id)a0;

@end
