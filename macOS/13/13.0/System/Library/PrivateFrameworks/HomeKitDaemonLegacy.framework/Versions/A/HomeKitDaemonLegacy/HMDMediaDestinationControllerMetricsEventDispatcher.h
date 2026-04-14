@class NSUUID, NSString, HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent;
@protocol HMDMediaDestinationControllerMetricsEventDispatcherDataSource, HMMLogEventSubmitting;

@interface HMDMediaDestinationControllerMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyTaskRunner> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) id<HMDMediaDestinationControllerMetricsEventDispatcherDataSource> dataSource;
@property (readonly) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (retain) HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *trackedStagedDestinationIdentifierEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)runDailyTask;
- (void)submitFailureEventWithEventErrorCode:(unsigned long long)a0 error:(id)a1;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1 dataSource:(id)a2;
- (void)submitReceivedUpdateDestinationRequestMessageEventWithDestinationIdentifier:(id)a0 existingDestinationIdentifier:(id)a1;
- (void)submitTransactionUpdatedDestinationEventWithDestinationIdentifier:(id)a0 existingDestinationIdentifier:(id)a1;
- (void)startStagedDestinationIdentifierCommittedEventWithStagedDestinationIdentifier:(id)a0;
- (void)submitStagedDestinationIdentifierCommittedEventWithCommittedDestinationIdentifier:(id)a0;
- (void)submitDailySetDestinationEvent;
- (id)dataSourceCurrentUserPrivilege;
- (id)dataSourceCurrentUser;
- (id)dataSourceCurrentDestinationType;
- (id)dataSourceDestinationTypeWithIdentifier:(id)a0;
- (id)dataSourceIsTriggeredOnControllerDevice;

@end
