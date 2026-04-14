@interface GEOKeyBagNotification : NSObject {
    int _currentState;
    int _notifyTokenBeforeFirstUnlock;
    int _notifyTokenAfterFirstUnlock;
}

@property (class, readonly, nonatomic) GEOKeyBagNotification *sharedObject;

@property (readonly, nonatomic) int state;

+ (BOOL)canAccessFilesWithProtection:(unsigned long long)a0;

- (void)updateState;
- (BOOL)canAccessFilesWithProtection:(unsigned long long)a0;
- (void)dealloc;
- (void)runAfterFirstUnlock:(id)a0 block:(id /* block */)a1;
- (BOOL)addDataDidBecomeAvailableAfterFirstUnlockObserver:(id)a0;
- (id)init;

@end
