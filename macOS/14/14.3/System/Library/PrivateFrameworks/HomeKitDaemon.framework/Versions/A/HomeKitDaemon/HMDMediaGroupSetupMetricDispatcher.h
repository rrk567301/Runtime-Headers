@class NSUUID, HMFTimer, NSString;
@protocol HMDMediaGroupSetupMetricDispatcherDataSource, HMMLogEventSubmitting;

@interface HMDMediaGroupSetupMetricDispatcher : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak) id<HMDMediaGroupSetupMetricDispatcherDataSource> dataSource;
@property (readonly) unsigned long long groupType;
@property (readonly) id /* block */ currentUpTicksFactory;
@property (readonly, weak) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) id /* block */ submissionTimerFactory;
@property (retain) NSUUID *activeGroupIdentifier;
@property (retain) HMFTimer *submissionTimer;
@property (readonly) unsigned long long setupRequestReceivedTimeMS;
@property (readonly) unsigned long long setupRequestCommittedTimeMS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)_resetActiveTracking;
- (void)_submitLogEvent:(id)a0 error:(id)a1;
- (unsigned long long)dispatcherGroupType;
- (id)initWithDataSource:(id)a0 groupType:(unsigned long long)a1 logEventSubmitter:(id)a2;
- (id)initWithDataSource:(id)a0 groupType:(unsigned long long)a1 logEventSubmitter:(id)a2 currentUpTicksFactory:(id /* block */)a3 submissionTimerFactory:(id /* block */)a4;
- (void)markRequestCommittedForGroupIdentifier:(id)a0 error:(id)a1;
- (void)markRequestReceivedForGroupIdentifier:(id)a0;
- (void)resetActiveTracking;
- (id)setupLatencyLogEvent:(unsigned long long)a0 groupIdentifier:(id)a1 isController:(BOOL)a2 isPrimaryResident:(BOOL)a3 totalDuration:(unsigned long long)a4 errorStage:(id)a5;
- (void)submitLogEventWithTotalDuration:(unsigned long long)a0 error:(id)a1;

@end
