@class HDKeyValueDomain, HDProfile;

@interface HDWorkoutUtilities : NSObject <HDKeyValueDomainObserver, HDProfileInitializedObserver> {
    HDKeyValueDomain *_domain;
    BOOL _fetchedOnce;
    BOOL _lock_shouldAllowWorkoutDatabaseAccessWhileLocked;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDProfile *_profile;
}

@property (readonly, nonatomic) BOOL shouldAllowWorkoutDatabaseAccessWhileLocked;
@property (readonly, nonatomic) BOOL shouldDisplayWorkoutTransparencyAlert;

+ (BOOL)enumerateQuantitiesOfType:(id)a0 from:(id)a1 to:(id)a2 transaction:(id)a3 profile:(id)a4 error:(id *)a5 handler:(id /* block */)a6;
+ (void)submitRouteSmoothingWorkoutPerformanceAnalyticsWithCoordinator:(id)a0 event:(id)a1 sessionIdentifier:(id)a2 activityType:(unsigned long long)a3 duration:(long long)a4 activityCount:(long long)a5 extendedMode:(BOOL)a6 totalLocations:(long long)a7 routeSmoothingRetryCount:(long long)a8 activityID:(id)a9 failure:(BOOL)a10;
+ (void)submitWorkoutPerformanceAnalyticsWithCoordinator:(id)a0 event:(id)a1 sessionIdentifier:(id)a2 activityType:(unsigned long long)a3 duration:(long long)a4 activityCount:(long long)a5 failure:(BOOL)a6;

- (id)initWithProfile:(id)a0;
- (void)didUpdateKeyValueDomain:(id)a0;
- (void)profileDidInitialize:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldAllowDatabaseAccessWhileLockedForProfile:(id)a0 error:(id *)a1;

@end
