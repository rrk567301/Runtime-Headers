@class NSHashTable;

@interface MTDBExtensionAccess : NSObject {
    NSHashTable *_observers;
    BOOL _hasAttemptedToFix;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isReady;
- (void)_stopObserving;
- (void)_startObserving;
- (void)attemptToFix;
- (void)_handleChange;

@end
