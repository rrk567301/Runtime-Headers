@class NSString, NSObject;
@protocol OS_dispatch_queue, APXPCActivityDelegate, OS_xpc_object;

@interface APXPCActivity : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;

@property (retain, nonatomic) id<APXPCActivityDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic) BOOL deferralCheckActive;
@property (retain, nonatomic) NSString *taskID;

+ (id)_translateCriteria:(id)a0;

- (void)checkin;
- (BOOL)finished;
- (void)cancel;
- (void)scheduleWithDelay:(long long)a0;
- (BOOL)shouldDefer;
- (BOOL)deferActivity;
- (void).cxx_destruct;
- (void)schedule;
- (BOOL)setActivityState:(long long)a0;
- (void)_registerActivityWithCriteria:(id)a0;
- (BOOL)_continueActivity;
- (void)_backgroundDeferralCheck;
- (void)_endDeferralCheck;
- (id)initWithDelegate:(id)a0;
- (void)_startDeferralCheck;

@end
