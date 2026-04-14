@class MCProgressGroup, NSString, NSCondition, MCDiscretionaryWorkScheduler, NSMutableSet;

@interface MCTask : MCActivity {
    NSMutableSet *_currentOperations;
    MCDiscretionaryWorkScheduler *_workScheduler;
}

@property (retain) NSCondition *finishedCondition;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) long long networkPriority;
@property (nonatomic) long long persistencePriority;
@property (readonly, nonatomic) MCProgressGroup *progressGroup;
@property (retain, nonatomic) MCDiscretionaryWorkScheduler *workScheduler;
@property (readonly, nonatomic) unsigned long long numberOfOperationsInProgress;
@property (copy) NSString *logPrefix;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)end;
- (void)cancel;
- (id)init;
- (void)cancelAllOperations;
- (void).cxx_destruct;
- (void)waitUntilFinished;
- (void)dealloc;
- (void)operationFinished:(id)a0;
- (void)trackOperation:(id)a0;

@end
