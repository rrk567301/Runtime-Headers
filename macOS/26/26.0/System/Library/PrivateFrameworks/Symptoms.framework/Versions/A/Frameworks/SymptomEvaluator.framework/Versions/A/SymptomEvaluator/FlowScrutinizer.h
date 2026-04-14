@class NSMutableDictionary;

@interface FlowScrutinizer : NSObject

@property (retain, nonatomic) NSMutableDictionary *originLedgers;

+ (id)sharedInstance;

- (id)_findFlowOriginLedgerWithSnapshot:(id)a0;
- (void)addActivityBitmapFromSnapshot:(id)a0;
- (id)init;
- (void)flushInactiveLedgersAtMachAbsTime:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isFlushableOriginLedgerAfterFlushingSubsidiaries:(id)a0 atMachAbsTime:(unsigned long long)a1;

@end
