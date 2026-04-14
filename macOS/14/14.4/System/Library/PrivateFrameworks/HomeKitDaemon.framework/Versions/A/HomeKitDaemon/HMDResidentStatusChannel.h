@class NSNotificationCenter, NSString, HMFTimer, NSSet, NSMutableDictionary, NSMutableSet, NSObject, HMDResidentStatus, HMDStatusChannel, HMDHome;
@protocol OS_dispatch_queue, HMDStatusChannelProvider, HMMLogEventSubmitting, HMDTimerProvider;

@interface HMDResidentStatusChannel : NSObject <HMFLogging, HMFTimerDelegate, HMDStatusChannelDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) HMDHome *home;
@property (readonly, nonatomic) HMDStatusChannel *channel;
@property (readonly, nonatomic) NSMutableDictionary *residentStatusMap;
@property (readonly, nonatomic) NSMutableSet *observers;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<HMDTimerProvider> timerProvider;
@property (readonly, nonatomic) id<HMDStatusChannelProvider> channelProvider;
@property (retain) HMFTimer *debounceTimer;
@property (retain) HMFTimer *inviteRetryTimer;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) HMDResidentStatus *currentPrimaryResident;
@property (readonly, nonatomic) HMDResidentStatus *currentResidentStatus;
@property (readonly, nonatomic) NSSet *presentResidentStatuses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)start;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)channel:(id)a0 didObserveRecordUpdate:(id)a1;
- (void)_handleHomeUserAddedNotification:(id)a0;
- (void)_handleHomeUserRemovedNotification:(id)a0;
- (void)_inviteSharedUsers;
- (void)_startDebounceTimer;
- (void)_stopDebounceTimer;
- (void)channel:(id)a0 didObserveConnectionChange:(BOOL)a1;
- (id)initWithHome:(id)a0 queue:(id)a1;
- (id)initWithHome:(id)a0 queue:(id)a1 notificationCenter:(id)a2 timerProvider:(id)a3 channelProvider:(id)a4 logEventSubmitter:(id)a5;
- (void)publishResidentStatus:(id)a0 reason:(long long)a1;

@end
