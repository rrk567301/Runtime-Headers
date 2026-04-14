@class NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFTemperatureUnitObserver : NSObject

@property (retain) NSObject<OS_dispatch_queue> *temperatureUnitUpdateQueue;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (retain) NSMutableDictionary *blockObserversForUUID;
@property (retain) NSHashTable *observerObjects;
@property int userTemperatureUnit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) int temperatureUnit;

+ (id)sharedObserver;

- (void)dealloc;
- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)removeObserver:(id)a0;
- (void)removeAllObservers;
- (void)_updateTemperatureUnit;
- (id)addBlockObserver:(id /* block */)a0;
- (BOOL)removeBlockObserverWithHandle:(id)a0;
- (void)q_updateTemperatureUnit;
- (void)q_notifyObserversOfUpdatedTemperatureUnit:(int)a0;

@end
