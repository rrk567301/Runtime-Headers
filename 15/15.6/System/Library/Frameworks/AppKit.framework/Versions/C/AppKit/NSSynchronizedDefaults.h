@class NSEnabledKeys;

@interface NSSynchronizedDefaults : NSObservableDefaults {
    NSEnabledKeys *_enabledKeys;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (char)isSynchronizationEnabledForKey:(id)a0;
- (void)addSynchronizedKeys:(id)a0;
- (char)canSynchronizeConfiguration;
- (id)enabledKeys;
- (void)notifyEnabledKeysChanged;
- (void)removeSynchronizedKeys:(id)a0;
- (void)setSynchronizationEnabled:(char)a0 forKey:(id)a1;

@end
