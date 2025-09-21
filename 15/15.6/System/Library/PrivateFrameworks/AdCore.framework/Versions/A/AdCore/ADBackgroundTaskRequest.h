@class NSDate, NSString, NSObject;
@protocol OS_xpc_object;

@interface ADBackgroundTaskRequest : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (retain, nonatomic) NSObject<OS_xpc_object> *criteria;
@property (nonatomic) char performDeferralCheck;
@property (retain, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (nonatomic) long long delay;
@property (nonatomic) char requiresNetworkConnectivity;
@property (nonatomic) char requireBuddyComplete;
@property (nonatomic) char requireClassCData;
@property (nonatomic) char allowBattery;
@property (nonatomic) char requireSleep;
@property (nonatomic) char isRepeating;
@property (nonatomic) long long backgroundTaskRetryCount;
@property (nonatomic) long long gracePeriod;
@property (retain, nonatomic) NSString *priority;
@property (nonatomic) char isCPUIntensive;
@property (readonly, nonatomic) char shouldDefer;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithID:(id)a0;
- (char)taskIsDeferred;
- (char)continueTask;
- (char)finishTask;
- (void)setPropertyAsInteger:(id)a0 value:(long long)a1;
- (id)copyBackgroundTaskAgentCriteria;
- (void)_backgroundDeferralCheck:(id)a0 completion:(id /* block */)a1;
- (char)deferTask;
- (void)endBackgroundDeferralCheck;
- (id)getPropertyAsDate:(id)a0;
- (double)getPropertyAsDouble:(id)a0;
- (long long)getPropertyAsInteger:(id)a0;
- (id)getPropertyAsString:(id)a0;
- (id)initWithCriteria:(id)a0 ID:(id)a1 activity:(id)a2;
- (void)setPropertyAsDate:(id)a0 value:(id)a1;
- (void)setPropertyAsDouble:(id)a0 value:(double)a1;
- (void)setPropertyAsString:(id)a0 value:(id)a1;
- (void)startBackgroundDeferralCheckForTime:(id)a0 completionHandler:(id /* block */)a1;
- (char)taskCanContinueForTime:(id)a0;
- (char)taskIsContinuing;

@end
