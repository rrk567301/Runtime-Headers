@class NSString, NSObject;
@protocol OS_dispatch_queue, APXPCActivityDelegate, OS_xpc_object;

@interface APXPCActivity : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;

@property (retain, nonatomic) id<APXPCActivityDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic) BOOL deferralCheckActive;
@property (retain, nonatomic) NSString *taskID;

+ (id)_translateCriteria:(id)a0;

- (void)schedule;
- (BOOL)shouldDefer;
- (void)cancel;
- (void)_backgroundDeferralCheck;
- (void)checkin;
- (BOOL)deferActivity;
- (void)_endDeferralCheck;
- (id)initWithDelegate:(id)a0;
- (BOOL)setActivityState:(long long)a0;
- (void)scheduleWithDelay:(long long)a0;
- (BOOL)finished;
- (void).cxx_destruct;
- (BOOL)_continueActivity;
- (void)_registerActivityWithCriteria:(id)a0;
- (void)_startDeferralCheck;

@end
