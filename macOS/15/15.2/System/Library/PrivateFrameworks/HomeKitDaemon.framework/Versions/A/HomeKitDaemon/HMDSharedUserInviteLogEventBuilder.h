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

- (void).cxx_destruct;
- (BOOL)isReady;
- (void)cancel;
- (void)submit;
- (BOOL)isiCloudSignedIn;
- (BOOL)isNetworkAvailable;
- (void)timerDidFire:(id)a0;
- (long long)IDSAccountRegistrationError;
- (long long)IDSAccountRegistrationStatus;
- (id)initWithLogEvent:(id)a0 homeManager:(id)a1 sessionIdentifier:(id)a2 invitationType:(unsigned long long)a3 logEventSubmitter:(id)a4 wifiManager:(id)a5 currentUpTicksBlock:(id /* block */)a6 submissionTimerFactory:(id /* block */)a7;
- (BOOL)isIDSAvailable;
- (void)markAddUserBegin;
- (void)markAddUserEnd;
- (void)markError:(id)a0;
- (void)startSubmissionTimer;
- (void)submitIfReady;

@end
