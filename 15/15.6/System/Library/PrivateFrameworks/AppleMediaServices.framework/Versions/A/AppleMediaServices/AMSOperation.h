@class NSLock, NSMutableSet, NSError, AMSMutableBinaryPromise;

@interface AMSOperation : NSOperation {
    NSLock *_lock;
    NSMutableSet *_subOperations;
    char _cancelled;
}

@property (retain) AMSMutableBinaryPromise *promise;
@property (weak) AMSOperation *parentOperation;
@property char success;
@property (retain) NSError *error;

- (id)init;
- (void)run;
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (void)cancel;
- (char)isCancelled;
- (void)main;
- (void)runSubOperation:(id)a0;
- (void)runSubOperation:(id)a0 onQueue:(id)a1;

@end
