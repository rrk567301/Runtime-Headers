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
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (void)cancel;
- (BOOL)isCancelled;
- (void)main;
- (void)runSubOperation:(id)a0;
- (void)runSubOperation:(id)a0 onQueue:(id)a1;

@end
