@class HMFTimer, NSUUID, NSString;
@protocol HMDMediaGroupsAggregateBackupMessageTimerDelegate, HMFTimerProvider;

@interface HMDMediaGroupsAggregateBackupMessageTimer : NSObject <HMFTimerProvider, HMFTimerDelegate>

@property (weak) id<HMFTimerProvider> timerProvider;
@property (retain) HMFTimer *timer;
@property (copy) NSUUID *currentMessageIdentifier;
@property unsigned long long attemptCount;
@property (weak) id<HMDMediaGroupsAggregateBackupMessageTimerDelegate> delegate;
@property (readonly, copy) NSUUID *participantAccessoryUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (id)timerWithTimeInterval:(double)a0 options:(unsigned long long)a1;
- (void)startRetryTimer;
- (id)initWithParticipantAccessoryUUID:(id)a0;
- (id)initWithParticipantAccessoryUUID:(id)a0 timerProvider:(id)a1;
- (void)markAttemptWithMessageIdentifier:(id)a0;
- (double)nextTimeInterval;

@end
