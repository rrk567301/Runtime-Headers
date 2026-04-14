@class NSHashTable;
@protocol BSInvalidatable;

@interface SWActiveSystemActivityRegistry : NSObject {
    id<BSInvalidatable> _stateCaptureHandler;
    NSHashTable *_lock_activeSystemActivities;
    NSHashTable *_lock_observers;
    unsigned long long _lock_activeSystemActivitiesCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedRegistry;

- (void)registerActiveSystemActivity:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)unregisterInactiveSystemActivity:(id)a0;
- (id)init;
- (id)description;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;

@end
