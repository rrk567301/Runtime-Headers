@class HMFActivity, NSError, HAP2PropertyLock;

@interface HAP2AsynchronousOperation : NSOperation {
    HAP2PropertyLock *_propertyLock;
}

@property (readonly, nonatomic, getter=isExecuting) char executing;
@property (readonly, nonatomic, getter=isFinished) char finished;
@property (readonly, nonatomic, getter=isCancelled) char cancelled;
@property (readonly, nonatomic) HMFActivity *activity;
@property (readonly, nonatomic) NSError *error;

+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)finish;
- (void)start;
- (void)cancel;
- (char)isAsynchronous;
- (void)main;
- (void)cancelWithError:(id)a0;
- (void)finishWithError:(id)a0;
- (id)initWithName:(id)a0 activity:(id)a1;
- (id)initWithName:(id)a0 optionalActivity:(id)a1;

@end
