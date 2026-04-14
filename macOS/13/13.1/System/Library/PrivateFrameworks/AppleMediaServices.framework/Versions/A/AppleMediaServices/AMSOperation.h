@class NSLock, NSMutableSet, AMSBinaryPromise, NSError;

@interface AMSOperation : NSOperation {
    NSLock *_lock;
    NSMutableSet *_subOperations;
    BOOL _cancelled;
}

@property (weak) AMSOperation *parentOperation;
@property (readonly) AMSBinaryPromise *promise;
@property BOOL success;
@property (retain) NSError *error;

- (id)init;
- (void)run;
- (void)lock;
- (void).cxx_destruct;
- (void)unlock;
- (void)cancel;
- (void)main;
- (BOOL)isCancelled;
- (void)runSubOperation:(id)a0;
- (void)runSubOperation:(id)a0 onQueue:(id)a1;

@end
