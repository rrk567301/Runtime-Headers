@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AFNetworkAvailability : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    struct AvailabilityState { unsigned char availabilityIsKnown : 1; unsigned char isAvailable : 1; } _state;
    NSHashTable *_observers;
}

+ (id)sharedAvailability;

- (void)_updateState;
- (void)_availabilityChanged;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_clearState;
- (BOOL)isAvailable;
- (void)_stopObservingAvailability;
- (void).cxx_destruct;
- (void)_notifyObservers;
- (void)_startObservingAvailability;
- (id)init;

@end
