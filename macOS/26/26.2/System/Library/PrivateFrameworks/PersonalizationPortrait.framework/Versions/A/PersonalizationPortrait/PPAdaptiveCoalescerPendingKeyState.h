@class NSMutableArray;

@interface PPAdaptiveCoalescerPendingKeyState : NSObject {
    id _key;
    NSMutableArray *_handlers;
    NSMutableArray *_dates;
}

- (double)currentQPSForNowDate:(id)a0;
- (id)initWithKey:(id)a0;
- (void)addDate:(id)a0;
- (double)currentDelayForNowDate:(id)a0;
- (double)currentQPSForDateInterval:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldGarbageCollectForNowDate:(id)a0;
- (id)init;

@end
