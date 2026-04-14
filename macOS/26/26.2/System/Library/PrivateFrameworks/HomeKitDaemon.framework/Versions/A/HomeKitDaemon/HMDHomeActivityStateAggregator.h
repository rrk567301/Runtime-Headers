@class NSString, NSDictionary, NSMutableDictionary, HMDHomeActivityStateSchedule, NSDate;
@protocol HMDHomeActivityStateAggregatorStorage, HMDHomeActivityStateManagerDataSource, HMDHomeActivityStateAggregatorStateChangeDelegate;

@interface HMDHomeActivityStateAggregator : HMFObject <HMFLogging, HMDDumpState> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_userActivityMap;
}

@property (class, readonly, nonatomic) unsigned long long contributorType;

@property (nonatomic, getter=isConfigured) BOOL configured;
@property (readonly, nonatomic) id<HMDHomeActivityStateAggregatorStorage> storage;
@property (readonly, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (readonly, copy, nonatomic) NSDictionary *userActivityMap;
@property (readonly, nonatomic) HMDHomeActivityStateSchedule *homeActivityStateSchedule;
@property (readonly, copy, nonatomic) NSDictionary *rawUserActivityMap;
@property (weak, nonatomic) id<HMDHomeActivityStateAggregatorStateChangeDelegate> stateChangeDelegate;
@property (readonly) NSDate *nextRefreshTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)dumpStateWithPrivacyLevel:(unsigned long long)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)configureWithCompletionHandler:(id /* block */)a0;
- (BOOL)auditUserMap;
- (void)handleRestrictedGuestScheduleEndedForUserUUID:(id)a0;
- (void)handleRestrictedGuestScheduleStartedForUserUUID:(id)a0;
- (BOOL)handleUpdateFromDetector:(id)a0;
- (id)initWithStorage:(id)a0 dataSource:(id)a1;
- (BOOL)isStateEquivalentForExistingReport:(id)a0 newReport:(id)a1;
- (void)notifyAggregatorStateChanged;
- (id)removeActivityReportForUser:(id)a0;

@end
