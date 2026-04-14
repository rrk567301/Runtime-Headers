@class NSHashTable;

@interface MTDBExtensionAccess : NSObject {
    NSHashTable *_observers;
    BOOL _hasAttemptedToFix;
}

+ (id)sharedInstance;
+ (void)postDatabaseCreatedNotification;

- (void)dealloc;
- (BOOL)isReady;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)_startObserving;
- (void)attemptToFix;
- (void)addObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_stopObserving;
- (void)_handleChange;
- (void).cxx_destruct;

@end
