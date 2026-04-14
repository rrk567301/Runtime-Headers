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
- (void)checkin;
- (BOOL)finished;
- (BOOL)setActivityState:(long long)a0;
- (BOOL)shouldDefer;
- (void)cancel;
- (void)scheduleWithDelay:(long long)a0;
- (BOOL)_continueActivity;
- (void)_registerActivityWithCriteria:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)_backgroundDeferralCheck;
- (void)_startDeferralCheck;
- (void)_endDeferralCheck;
- (BOOL)deferActivity;
- (void).cxx_destruct;

@end
