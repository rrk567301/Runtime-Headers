@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AFNetworkAvailability : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    struct AvailabilityState { unsigned char availabilityIsKnown : 1; unsigned char isAvailable : 1; } _state;
    NSHashTable *_observers;
}

+ (id)sharedAvailability;

- (void)_clearState;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)_updateState;
- (void)_availabilityChanged;
- (void)addObserver:(id)a0;
- (void)_notifyObservers;
- (void)_stopObservingAvailability;
- (BOOL)isAvailable;
- (void).cxx_destruct;
- (void)_startObservingAvailability;

@end
