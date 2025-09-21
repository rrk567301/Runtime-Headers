@class NSString, NSMutableDictionary, HMDHome, HMCContext;

@interface HMDHomeActivityStateAggregatorStorage : HMFObject <HMFLogging, HMDHomeActivityStateAggregatorStorage> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_userIDByActivityStatusModelID;
}

@property (class, readonly) unsigned long long activityType;

@property (readonly, nonatomic) HMCContext *context;
@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithDataSource:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)fetchUserActivityReportsOnManagedObjectContext;
- (void)fetchUserActivityReportsWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeUserActivityStatusForUserUUID:(id)a0;
- (void)storeUserActivityReport:(id)a0;
- (void)updateMKFUserActivityStatus:(id)a0 withReport:(id)a1;
- (id)userActivityReportWithActivityStatus:(id)a0 user:(id)a1;

@end
