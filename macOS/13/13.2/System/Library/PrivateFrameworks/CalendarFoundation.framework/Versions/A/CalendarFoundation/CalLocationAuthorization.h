@class NSString, CalLocationAuthorizationStatus, CLLocationManager, NSObject;
@protocol OS_dispatch_group;

@interface CalLocationAuthorization : NSObject <CLLocationManagerDelegate> {
    id _bundleOrBundleIdentifier;
    NSObject<OS_dispatch_group> *_initializationGroup;
    CLLocationManager *_locationManager;
    CalLocationAuthorizationStatus *_status;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)authorizationStatusForBundleIdentifier:(id)a0;
+ (int)authorizationStatusForBundle:(id)a0;
+ (id)logHandle;
+ (id)locationAuthorizationAsyncCallersQueue;
+ (void)authorizationStatusForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)authorizationStatusForBundle:(id)a0 completion:(id /* block */)a1;
+ (void)authorizationStatusForBundleIdentifier:(id)a0 bundle:(id)a1 completion:(id /* block */)a2;
+ (int)authorizationStatusForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)a0;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (void)preciseLocationAuthorizedForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)preciseLocationAuthorizedForBundle:(id)a0 completion:(id /* block */)a1;
+ (void)preciseLocationAuthorizedForBundleIdentifier:(id)a0 bundle:(id)a1 completion:(id /* block */)a2;
+ (BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)a0;
+ (BOOL)preciseLocationAuthorizedForBundle:(id)a0;
+ (BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (void)initializeQueueAndInstancesIfNeeded;
+ (id)_keyForBundleID:(id)a0 bundle:(id)a1;
+ (id)_cachedInstanceForBundleID:(id)a0 bundle:(id)a1;
+ (id)authorizationForBundleIdentifier:(id)a0 bundle:(id)a1 createIfNecessary:(BOOL)a2;
+ (void)ttlLocationStatusWithCompletion:(id /* block */)a0;
+ (unsigned long long)ttlLocationStatus;

- (void).cxx_destruct;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (id)authorizationStatus;
- (id)initWithBundleID:(id)a0 bundle:(id)a1 queue:(id)a2;
- (unsigned long long)waitForPrecision;

@end
