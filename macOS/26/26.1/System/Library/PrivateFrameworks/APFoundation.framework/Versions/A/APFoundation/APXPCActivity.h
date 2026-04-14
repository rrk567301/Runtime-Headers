@class NSString, NSObject;
@protocol OS_dispatch_queue, APXPCActivityDelegate, OS_xpc_object;

@interface APXPCActivity : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;

@property (retain, nonatomic) id<APXPCActivityDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic) BOOL deferralCheckActive;
@property (retain, nonatomic) NSString *taskID;

+ (id)_translateCriteria:(id)a0;

- (BOOL)shouldDefer;
- (void)scheduleWithDelay:(long long)a0;
- (BOOL)_continueActivity;
- (BOOL)finished;
- (void)checkin;
- (BOOL)deferActivity;
- (void)cancel;
- (void)_endDeferralCheck;
- (void)schedule;
- (void)_startDeferralCheck;
- (void)_registerActivityWithCriteria:(id)a0;
- (id)initWithDelegate:(id)a0;
- (BOOL)setActivityState:(long long)a0;
- (void).cxx_destruct;
- (void)_backgroundDeferralCheck;

@end
