@class NSObject, _CDContextualKeyPath;
@protocol UNCBlueListMonitorDelegate, _CDContext, OS_dispatch_queue;

@interface UNCBlueListMonitor : NSObject {
    char _budgetExhausted;
    id<_CDContext> _context;
    _CDContextualKeyPath *_blueListKeyPath;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<UNCBlueListMonitorDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_startMonitoring;
- (char)shouldBoostOpportunisticTopicsToEnabled;

@end
