@class NSHashTable;

@interface WCDistributedNotificationCenter : NSObject

@property (class, readonly, nonatomic) WCDistributedNotificationCenter *defaultCenter;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (retain, nonatomic) NSHashTable *observers;

- (void)_notifyObserversOfPreferencesChange;
- (void)postWeatherLocationAuthorizationDidUpdateNotification;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)postWeatherSavedLocationsDidUpdateNotification;
- (void)weatherPrefsDidGetUpdated:(id)a0;

@end
