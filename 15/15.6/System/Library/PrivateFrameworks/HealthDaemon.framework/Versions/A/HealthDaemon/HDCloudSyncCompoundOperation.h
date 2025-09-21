@class HDCloudSyncOperation, NSString, NSArray, NSMutableArray;

@interface HDCloudSyncCompoundOperation : HDCloudSyncOperation {
    NSMutableArray *_operations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDCloudSyncOperation *_currentOperation;
    NSArray *_remainingOperations;
    struct atomic_flag { _Atomic BOOL _Value; } _runningOperations;
    NSMutableArray *_operationErrors;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) char continueOnSubOperationError;
@property (readonly) char hasEncounteredSubOperationError;
@property (readonly, copy) NSArray *operations;
@property (copy) id /* block */ preparationHandler;

+ (char)shouldProduceOperationAnalytics;
+ (char)shouldLogAtOperationStart;

- (id)description;
- (void).cxx_destruct;
- (void)start;
- (void)main;
- (void)skip;
- (char)finishWithSuccess:(char)a0 error:(id)a1;
- (void)addOperation:(id)a0 transitionHandler:(id /* block */)a1;
- (void)addOperationOfClass:(Class)a0 transitionHandler:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 name:(id)a2 continueOnSubOperationError:(char)a3;
- (id)operationsOfType:(Class)a0;
- (id)unitTest_currentOperation;

@end
