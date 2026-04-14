@class NSMutableDictionary;

@interface FlowScrutinizer : NSObject

@property (retain, nonatomic) NSMutableDictionary *originLedgers;

+ (id)sharedInstance;

- (id)_findFlowOriginLedgerWithSnapshot:(id)a0;
- (id)init;
- (BOOL)isFlushableOriginLedgerAfterFlushingSubsidiaries:(id)a0 atMachAbsTime:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addActivityBitmapFromSnapshot:(id)a0;
- (void)flushInactiveLedgersAtMachAbsTime:(unsigned long long)a0;

@end
