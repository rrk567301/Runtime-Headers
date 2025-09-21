@class NSError, ICUserIdentity, NSString;

@interface MPAsyncOperation : NSOperation <MPUserIdentityConsuming> {
    BOOL _finished;
    BOOL _executing;
    BOOL _cancelled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSError *error;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFinished;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (void)execute;
- (void)start;
- (void)cancel;
- (void)finish;
- (void)finishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
