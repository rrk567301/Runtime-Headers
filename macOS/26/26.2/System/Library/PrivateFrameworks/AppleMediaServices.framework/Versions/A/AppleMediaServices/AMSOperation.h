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

- (BOOL)isCancelled;
- (void)cancel;
- (void)run;
- (void)unlock;
- (void)main;
- (void).cxx_destruct;
- (void)lock;
- (id)init;
- (void)runSubOperation:(id)a0;
- (void)runSubOperation:(id)a0 onQueue:(id)a1;

@end
