@class HMFTimer, NSString, HMDHomeManager, HMDHome, NSDate;
@protocol HMDDeviceSetupTrackingInfo, HMMLogEventSubmitting;

@interface HMDAccessorySetupMetricDispatcher : HMFObject <HMFTimerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _submitted;
    HMFTimer *_timer;
    id<HMMLogEventSubmitting> _dispatcher;
    HMDHomeManager *_homeManager;
    HMDHome *_home;
}

@property (readonly) NSDate *firstSettingTime;
@property (readonly) NSDate *languageSettingTime;
@property (readonly) id<HMDDeviceSetupTrackingInfo> trackingInfo;
@property (readonly) BOOL submitted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)submit;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)addHome:(id)a0;
- (void)markFirstSettingObserved;
- (void)markLanguageSettingObserved;
- (id)initWithTrackingInfo:(id)a0 homeManager:(id)a1;
- (id)initWithTrackingInfo:(id)a0 homeManager:(id)a1 logEventDispatcher:(id)a2 timerFactory:(id /* block */)a3;

@end
