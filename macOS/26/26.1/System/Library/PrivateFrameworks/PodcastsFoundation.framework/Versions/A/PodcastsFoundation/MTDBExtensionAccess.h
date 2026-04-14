@class NSHashTable;

@interface MTDBExtensionAccess : NSObject {
    NSHashTable *_observers;
    BOOL _hasAttemptedToFix;
}

+ (id)sharedInstance;
+ (void)postDatabaseCreatedNotification;

- (BOOL)isReady;
- (void)_stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)attemptToFix;
- (void)_startObserving;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleChange;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;

@end
