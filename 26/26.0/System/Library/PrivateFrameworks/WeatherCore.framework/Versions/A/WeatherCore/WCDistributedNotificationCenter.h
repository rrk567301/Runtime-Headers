@class NSHashTable;

@interface WCDistributedNotificationCenter : NSObject

@property (class, readonly, nonatomic) WCDistributedNotificationCenter *defaultCenter;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (retain, nonatomic) NSHashTable *observers;

- (void)_notifyObserversOfPreferencesChange;
- (void)postWeatherSavedLocationsDidUpdateNotification;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)weatherPrefsDidGetUpdated:(id)a0;
- (void)postWeatherLocationAuthorizationDidUpdateNotification;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;

@end
