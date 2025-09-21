@class NSError, ICUserIdentity, NSString;

@interface MPAsyncOperation : NSOperation <MPUserIdentityConsuming> {
    char _finished;
    char _executing;
    char _cancelled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSError *error;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (void)cancel;
- (char)isCancelled;
- (char)isExecuting;
- (char)isFinished;
- (void)execute;
- (void)finishWithError:(id)a0;

@end
