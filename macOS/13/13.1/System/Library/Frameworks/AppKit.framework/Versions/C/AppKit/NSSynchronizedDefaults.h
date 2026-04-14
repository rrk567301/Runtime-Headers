@class NSEnabledKeys;

@interface NSSynchronizedDefaults : NSObservableDefaults {
    NSEnabledKeys *_enabledKeys;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (void)addSynchronizedKeys:(id)a0;
- (void)removeSynchronizedKeys:(id)a0;
- (void)notifyEnabledKeysChanged;
- (void)setSynchronizationEnabled:(BOOL)a0 forKey:(id)a1;
- (BOOL)isSynchronizationEnabledForKey:(id)a0;
- (id)enabledKeys;
- (BOOL)canSynchronizeConfiguration;

@end
