@class __HMFLocationAuthorizationMarkOperation, NSString, HMFScheduler, CLLocationManager, NSMutableSet, NSObject, __HMFLocationAuthorizationRequest;
@protocol OS_dispatch_queue;

@interface HMFLocationAuthorization : HMFObject <CLLocationManagerDelegate, HMFLogging> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    HMFScheduler *_scheduler;
    int _status;
    long long _state;
    NSMutableSet *_observers;
    __HMFLocationAuthorizationRequest *_request;
    __HMFLocationAuthorizationMarkOperation *_operation;
}

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) NSString *bundlePath;
@property (readonly) CLLocationManager *internal;
@property (readonly) int status;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, getter=isAuthorized) BOOL authorized;
@property (readonly, getter=isMonitoring) BOOL monitoring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)logCategory;
+ (void)initialize;
+ (id)sharedAuthorization;

- (id)initWithBundleIdentifier:(id)a0;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (void)mark;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)initWithScheduler:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (id)initWithBundle:(id)a0;
- (id)attributeDescriptions;
- (id)init;
- (void)_requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (void)locationOperationCompleted;
- (void)_mark;
- (id)logIdentifier;
- (void).cxx_destruct;

@end
