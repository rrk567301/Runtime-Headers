@class HMFLocationAuthorization, NSString, CLLocationManager;

@interface __HMFLocationManagerOperation : HMFOperation <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _registeredForKVO;
    char _ready;
}

@property (readonly) HMFLocationAuthorization *authorization;
@property (readonly) CLLocationManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (char)isReady;
- (void)main;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithTimeout:(double)a0;
- (id)initWithAuthorization:(id)a0;
- (void)unregisterFromKVO;

@end
