@class NSString, NSHashTable, NSDate, HMDHomeActivityStateHomePresenceReceiver;
@protocol HMDHomeActivityStateManagerDataSource, HMDHomeUserActivityStatesDetails, HMDHomeActivityStateAggregatorManager, HMDHomeActivityStateManagerStorage;

@interface HMDHomeActivityStateManager : HMFObject <HMFLogging, HMDHomeActivityStateManagerStorageDelegate, HMDDumpState> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) id<HMDHomeUserActivityStatesDetails> userActivityStatesDetails;
@property (readonly, nonatomic) id<HMDHomeActivityStateManagerStorage> storage;
@property (readonly, nonatomic) NSHashTable *observers;
@property (nonatomic) unsigned long long activityState;
@property (copy, nonatomic) NSDate *activityStateHoldEndDate;
@property (nonatomic) BOOL isActivityStateHoldActive;
@property (retain, nonatomic) NSDate *transitionalStateEndDate;
@property (nonatomic) BOOL isCacheLoaded;
@property (retain, nonatomic) id<HMDHomeActivityStateAggregatorManager> homeActivityStateAggregatorManager;
@property (retain, nonatomic) HMDHomeActivityStateHomePresenceReceiver *presenceReceiver;
@property (readonly, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)dumpStateWithPrivacyLevel:(unsigned long long)a0;
- (id)messageTargetUUID;
- (void)unconfigure;
- (id)messageReceiveQueue;
- (void)_registerForMessages;
- (void)removeObserver:(id)a0;
- (id)initWithHome:(id)a0;
- (void)addObserver:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)currentHomeActivityStateDetails;
- (void)notifyFrameworkClientsAboutHomeActivityStateChange:(unsigned long long)a0 isActivityStateHoldActive:(BOOL)a1 activityStateHoldEndDate:(id)a2 transitionalStateEndDate:(id)a3;
- (void)_cachePropertiesForCurrentStateDetailsFromWorkingStore;
- (void)configureForResident;
- (id)currentStateHoldDetails;
- (BOOL)didUpdateCachedHomeActivityState:(unsigned long long)a0 withHoldInfo:(id)a1 transitionalStateEndDate:(id)a2;
- (id)dumpStateForResident;
- (void)handleCancelHoldMessage:(id)a0;
- (void)handleFetchCurrentHomeActivityState:(id)a0;
- (void)handlePrimaryResidentDidBecomeCurrentDeviceWithCompletion:(id /* block */)a0;
- (void)handlePrimaryResidentDidBecomeOtherDevice;
- (void)handleUserActivityReportUpdated:(id)a0;
- (void)handleUserRequestToUpdateHomeActivityState:(id)a0;
- (id)initWithDataSource:(id)a0 storage:(id)a1;
- (void)notifyObserversAboutHomeActivityStateChange:(unsigned long long)a0 withHoldInfo:(id)a1 transitionalStateEndDate:(id)a2;
- (void)storageDidUpdateActivityState:(unsigned long long)a0 isActivityStateHoldActive:(BOOL)a1 activityStateHoldEndDate:(id)a2 transitionalStateEndDate:(id)a3;
- (void)unconfigureForResident;

@end
