@class HMFTimer, NSString, HMFWiFiManager, HMDSharedUserInviteLogEvent;
@protocol HMMLogEventSubmitting;

@interface HMDSharedUserInviteLogEventBuilder : NSObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long eventCreatedTime;
    BOOL submitted;
    BOOL cancelled;
    HMDSharedUserInviteLogEvent *_logEvent;
    id<HMMLogEventSubmitting> _logEventSubmitter;
    id /* block */ _submissionTimerFactory;
    HMFWiFiManager *_wifiManager;
    HMFTimer *_submissionTimer;
}

@property (readonly) id /* block */ currentUpTicksBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)_invitationAgeFromSeconds:(double)a0;

- (BOOL)isReady;
- (void)timerDidFire:(id)a0;
- (void)cancel;
- (long long)IDSAccountRegistrationError;
- (long long)IDSAccountRegistrationStatus;
- (void)submit;
- (id)logIdentifier;
- (BOOL)isNetworkAvailable;
- (void).cxx_destruct;
- (BOOL)isiCloudSignedIn;
- (id)initWithLogEvent:(id)a0 homeManager:(id)a1 sessionIdentifier:(id)a2 invitationType:(unsigned long long)a3 invitationAge:(double)a4 invitationSource:(unsigned long long)a5 logEventSubmitter:(id)a6 wifiManager:(id)a7 currentUpTicksBlock:(id /* block */)a8 submissionTimerFactory:(id /* block */)a9;
- (BOOL)isIDSAvailable;
- (void)markAddUserBegin;
- (void)markAddUserEnd;
- (void)markError:(id)a0;
- (void)markTransientError:(id)a0;
- (void)requestRadarIfNeeded;
- (void)startSubmissionTimer;
- (void)submitIfReady;

@end
