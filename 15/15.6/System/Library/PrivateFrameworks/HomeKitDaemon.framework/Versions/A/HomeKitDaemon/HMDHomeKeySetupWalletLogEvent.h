@class HMFTimer, NSString, NSDictionary, NSUUID;

@interface HMDHomeKeySetupWalletLogEvent : HMMLogEvent <HMFTimerDelegate, HMMCoreAnalyticsLogging>

@property (retain, nonatomic) HMFTimer *timer;
@property (readonly) char success;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;

- (void).cxx_destruct;
- (void)timeout;
- (id)initWithQueue:(id)a0;
- (void)timerDidFire:(id)a0;
- (void)submitSuccess;

@end
