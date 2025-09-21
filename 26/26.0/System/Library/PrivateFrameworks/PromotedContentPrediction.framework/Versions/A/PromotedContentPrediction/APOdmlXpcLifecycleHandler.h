@class NSString, NSOperationQueue, NSDate, NSObject;
@protocol OS_xpc_object;

@interface APOdmlXpcLifecycleHandler : NSObject

@property (nonatomic) BOOL performDeferralCheck;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSOperationQueue *workQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpc_activity;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) BOOL shouldDefer;

- (BOOL)deferTask;
- (BOOL)taskIsContinuing;
- (void)endBackgroundDeferralCheck;
- (void)startBackgroundDeferralCheckForTime:(id)a0 completionHandler:(id /* block */)a1;
- (void)_backgroundDeferralCheck:(id)a0 completion:(id /* block */)a1;
- (BOOL)continueTask;
- (BOOL)taskCanContinueForTime:(id)a0;
- (BOOL)taskIsDeferred;
- (BOOL)finishTask;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;

@end
