@class NSLock, NSMutableSet, NSError, AMSMutableBinaryPromise;

@interface AMSOperation : NSOperation {
    NSLock *_lock;
    NSMutableSet *_subOperations;
    BOOL _cancelled;
}

@property (retain) AMSMutableBinaryPromise *promise;
@property (weak) AMSOperation *parentOperation;
@property BOOL success;
@property (retain) NSError *error;

- (void)unlock;
- (void)main;
- (BOOL)isCancelled;
- (void)cancel;
- (void)run;
- (void)lock;
- (id)init;
- (void).cxx_destruct;
- (void)runSubOperation:(id)a0;
- (void)runSubOperation:(id)a0 onQueue:(id)a1;

@end
