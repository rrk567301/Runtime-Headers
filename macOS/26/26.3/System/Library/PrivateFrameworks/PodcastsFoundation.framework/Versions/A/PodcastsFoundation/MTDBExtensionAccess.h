@class NSHashTable;

@interface MTDBExtensionAccess : NSObject {
    NSHashTable *_observers;
    BOOL _hasAttemptedToFix;
}

+ (id)sharedInstance;
+ (void)postDatabaseCreatedNotification;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_startObserving;
- (BOOL)isReady;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)attemptToFix;
- (void)_handleChange;
- (void)dealloc;
- (void)_stopObserving;
- (void)removeObserver:(id)a0;

@end
