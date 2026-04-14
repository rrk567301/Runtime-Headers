@class NSTimer, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WAActivityManager : NSObject {
    NSTimer *_eagerExitTimeout;
    NSTimer *_periodicActiveListTimer;
    BOOL waitingToInitDebugTimer;
    NSMutableArray *_active_transactions;
    BOOL isEagerExitEnabled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property unsigned long long transactionsStarted;
@property (retain) NSDate *dateFirstTransaction;
@property unsigned long long transactionsCompleted;
@property (copy, nonatomic) id /* block */ alternateExecutionBlockForCleanExit;
@property (copy, nonatomic) id /* block */ executeBeforePossibleEagerExit;

+ (id)sharedActivityManager;

- (id)init;
- (void).cxx_destruct;
- (void)_executeBeforePossibleEagerExit;
- (void)_executeTimerBlock;
- (void)debugTimer;
- (BOOL)debugTimerEnabled;
- (BOOL)isEagerExitEnabled;
- (void)osTransactionComplete:(id)a0;
- (void)osTransactionCreate:(const char *)a0 transaction:(id)a1;
- (unsigned long long)osTransactionsActive;

@end
