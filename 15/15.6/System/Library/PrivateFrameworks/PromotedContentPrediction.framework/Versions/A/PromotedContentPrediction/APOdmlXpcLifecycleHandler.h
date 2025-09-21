@class NSString, NSOperationQueue, NSDate, NSObject;
@protocol OS_xpc_object;

@interface APOdmlXpcLifecycleHandler : NSObject

@property (nonatomic) char performDeferralCheck;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSOperationQueue *workQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpc_activity;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) char shouldDefer;

- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;
- (char)taskIsDeferred;
- (char)continueTask;
- (char)finishTask;
- (void)_backgroundDeferralCheck:(id)a0 completion:(id /* block */)a1;
- (char)deferTask;
- (void)endBackgroundDeferralCheck;
- (void)startBackgroundDeferralCheckForTime:(id)a0 completionHandler:(id /* block */)a1;
- (char)taskCanContinueForTime:(id)a0;
- (char)taskIsContinuing;

@end
