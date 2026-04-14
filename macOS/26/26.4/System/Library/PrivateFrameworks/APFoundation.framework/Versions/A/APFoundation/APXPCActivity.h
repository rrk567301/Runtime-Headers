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
- (void)_backgroundDeferralCheck;
- (id)initWithDelegate:(id)a0;
- (void)schedule;
- (BOOL)deferActivity;
- (void)scheduleWithDelay:(long long)a0;
- (BOOL)finished;
- (void)_endDeferralCheck;
- (void)cancel;
- (BOOL)setActivityState:(long long)a0;
- (void).cxx_destruct;
- (void)_registerActivityWithCriteria:(id)a0;
- (BOOL)_continueActivity;
- (void)_startDeferralCheck;
- (BOOL)shouldDefer;

@end
