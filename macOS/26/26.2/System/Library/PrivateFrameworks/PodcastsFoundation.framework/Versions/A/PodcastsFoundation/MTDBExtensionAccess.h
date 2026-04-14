@class NSHashTable;

@interface MTDBExtensionAccess : NSObject {
    NSHashTable *_observers;
    BOOL _hasAttemptedToFix;
}

+ (id)sharedInstance;
+ (void)postDatabaseCreatedNotification;

- (void)removeObserver:(id)a0;
- (BOOL)isReady;
- (void)attemptToFix;
- (void)addObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_handleChange;
- (void)_stopObserving;
- (id)init;
- (void)_startObserving;
- (void)dealloc;

@end
