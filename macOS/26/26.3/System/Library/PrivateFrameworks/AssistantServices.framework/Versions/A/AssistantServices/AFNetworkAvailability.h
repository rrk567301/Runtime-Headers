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
- (BOOL)isAvailable;
- (void)_stopObservingAvailability;
- (id)init;
- (void)addObserver:(id)a0;
- (void)_notifyObservers;
- (void).cxx_destruct;
- (void)_startObservingAvailability;
- (void)_availabilityChanged;
- (void)removeObserver:(id)a0;
- (void)_clearState;

@end
