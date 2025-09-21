@class NSEnabledKeys;

@interface NSSynchronizedDefaults : NSObservableDefaults {
    NSEnabledKeys *_enabledKeys;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)valueForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isSynchronizationEnabledForKey:(id)a0;
- (void)addSynchronizedKeys:(id)a0;
- (BOOL)canSynchronizeConfiguration;
- (id)enabledKeys;
- (void)notifyEnabledKeysChanged;
- (void)removeSynchronizedKeys:(id)a0;
- (void)setSynchronizationEnabled:(BOOL)a0 forKey:(id)a1;

@end
