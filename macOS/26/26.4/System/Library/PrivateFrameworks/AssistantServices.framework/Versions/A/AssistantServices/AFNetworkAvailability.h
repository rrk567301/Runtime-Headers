@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_nw_path_monitor;

@interface AFNetworkAvailability : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    struct AvailabilityState { unsigned char availabilityIsKnown : 1; unsigned char isAvailable : 1; } _state;
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSHashTable *_observers;
}

+ (id)sharedAvailability;

- (void)_updateState;
- (BOOL)isAvailable;
- (void)_startObservingAvailability;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_notifyObservers;
- (id)init;
- (void)_clearState;
- (void)_startPathMonitor;
- (void)removeObserver:(id)a0;
- (void)_stopObservingAvailability;
- (void)_availabilityChanged;

@end
