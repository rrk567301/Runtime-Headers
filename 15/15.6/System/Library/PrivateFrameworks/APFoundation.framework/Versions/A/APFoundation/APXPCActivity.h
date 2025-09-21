@class NSString, NSObject;
@protocol OS_dispatch_queue, APXPCActivityDelegate, OS_xpc_object;

@interface APXPCActivity : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;

@property (retain, nonatomic) id<APXPCActivityDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic) char deferralCheckActive;
@property (retain, nonatomic) NSString *taskID;

+ (id)_translateCriteria:(id)a0;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)cancel;
- (char)finished;
- (char)shouldDefer;
- (void)schedule;
- (void)checkin;
- (void)_registerActivityWithCriteria:(id)a0;
- (char)setActivityState:(long long)a0;
- (void)scheduleWithDelay:(long long)a0;
- (void)_backgroundDeferralCheck;
- (char)_continueActivity;
- (void)_endDeferralCheck;
- (void)_startDeferralCheck;
- (char)deferActivity;

@end
