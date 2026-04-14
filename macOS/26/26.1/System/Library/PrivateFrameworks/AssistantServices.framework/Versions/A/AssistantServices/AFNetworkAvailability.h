@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AFNetworkAvailability : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    struct AvailabilityState { unsigned char availabilityIsKnown : 1; unsigned char isAvailable : 1; } _state;
    NSHashTable *_observers;
}

+ (id)sharedAvailability;

- (BOOL)isAvailable;
- (void)_stopObservingAvailability;
- (void)_updateState;
- (void)_notifyObservers;
- (void)_clearState;
- (void)_startObservingAvailability;
- (void).cxx_destruct;
- (void)_availabilityChanged;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;

@end
