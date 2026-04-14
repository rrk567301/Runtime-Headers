@class NSString, CalLocationAuthorizationStatus, CLLocationManager, NSObject;
@protocol OS_dispatch_group;

@interface CalLocationAuthorization : NSObject <CLLocationManagerDelegate> {
    id _bundleOrBundleIdentifier;
    NSObject<OS_dispatch_group> *_initializationGroup;
    CLLocationManager *_locationManager;
    CalLocationAuthorizationStatus *_status;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _initializedTimestamp;
    unsigned long long _firstCallbackReceivedTimestamp;
    BOOL _failedToInitializePrecision;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializeQueueAndInstancesIfNeeded;
+ (BOOL)preciseLocationAuthorizedForBundle:(id)a0;
+ (id)logHandle;
+ (void)preciseLocationAuthorizedForBundleIdentifier:(id)a0 bundle:(id)a1 completion:(id /* block */)a2;
+ (void)ttlLocationStatusWithCompletion:(id /* block */)a0;
+ (int)authorizationStatusForBundle:(id)a0;
+ (id)_keyForBundleID:(id)a0 bundle:(id)a1;
+ (BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)a0;
+ (void)authorizationStatusForBundleIdentifier:(id)a0 bundle:(id)a1 completion:(id /* block */)a2;
+ (id)_cachedInstanceForBundleID:(id)a0 bundle:(id)a1;
+ (BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (int)authorizationStatusForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)a0;
+ (void)preciseLocationAuthorizedForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (int)authorizationStatusForBundleIdentifier:(id)a0;
+ (unsigned long long)ttlLocationStatus;
+ (void)authorizationStatusForBundle:(id)a0 completion:(id /* block */)a1;
+ (id)locationAuthorizationAsyncCallersQueue;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (void)authorizationStatusForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (id)authorizationForBundleIdentifier:(id)a0 bundle:(id)a1 createIfNecessary:(BOOL)a2;
+ (void)preciseLocationAuthorizedForBundle:(id)a0 completion:(id /* block */)a1;

- (id)initWithBundleID:(id)a0 bundle:(id)a1 queue:(id)a2;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)authorizationStatus;
- (void).cxx_destruct;
- (unsigned long long)waitForPrecision;

@end
