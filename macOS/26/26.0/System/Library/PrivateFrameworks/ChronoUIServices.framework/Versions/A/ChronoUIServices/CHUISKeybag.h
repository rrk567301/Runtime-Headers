@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CHUISKeybag : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_observers;
    BOOL _queue_isEffectivelyLocked;
    BOOL _queue_isEffectivelyLockedAuthentic;
}

+ (id)sharedInstance;

- (void)_queue_handleKeybagStatusChanged;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)_queue_evaluateState;
- (BOOL)isEffectivelyLocked:(long long)a0;

@end
