@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CHUISKeybag : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_observers;
    BOOL _queue_isEffectivelyLocked;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_queue_handleKeybagStatusChanged;
- (BOOL)_queue_isEffectivelyLocked;
- (BOOL)isEffectivelyLocked;

@end
