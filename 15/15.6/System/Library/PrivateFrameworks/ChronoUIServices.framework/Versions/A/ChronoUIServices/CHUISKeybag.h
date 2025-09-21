@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CHUISKeybag : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_observers;
    char _queue_isEffectivelyLocked;
    char _queue_isEffectivelyLockedAuthentic;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_queue_evaluateState;
- (void)_queue_handleKeybagStatusChanged;
- (char)isEffectivelyLocked:(long long)a0;

@end
