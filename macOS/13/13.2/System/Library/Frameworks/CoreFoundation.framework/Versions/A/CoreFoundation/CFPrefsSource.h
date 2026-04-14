@class __CFPrefsWeakObservers, _CFXPreferences;

@interface CFPrefsSource : NSObject {
    _CFXPreferences *_containingPreferences;
    struct __CFDictionary { } *_dict;
    __CFPrefsWeakObservers *_observers;
    _Atomic long long _generationCount;
    _Atomic _Atomic unsigned int *shmemEntry;
    _Atomic unsigned int lastKnownShmemState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isSearchList;
}

- (void)dealloc;
- (id)description;
- (void)lock;
- (id)initWithContainingPreferences:(id)a0;
- (id)copyVolatileSourceWithContainingPreferences:(id)a0;
- (int)alreadylocked_updateObservingRemoteChanges;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)a0 forRole:(int *)a1;
- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (void *)alreadylocked_copyValueForKey:(struct __CFString { } *)a0;
- (void *)copyValueForKey:(struct __CFString { } *)a0;
- (BOOL)synchronize;
- (void)setConfigurationPath:(struct __CFString { } *)a0;
- (void)setStoreName:(struct __CFString { } *)a0;
- (void)setEnabled:(BOOL)a0;
- (struct __CFArray { } *)alreadylocked_copyKeyList;
- (struct __CFDictionary { } *)alreadylocked_copyDictionary;
- (void)mergeIntoDictionary:(struct __CFDictionary { } *)a0 sourceDictionary:(struct __CFDictionary { } *)a1 cloudKeyEvaluator:(id /* block */)a2;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)a0;
- (id)createRequestNewContentMessageForDaemon:(int)a0;
- (void)handleReply:(id)a0 toRequestNewDataMessage:(id)a1 onConnection:(id)a2 retryCount:(int)a3 error:(BOOL *)a4;
- (long long)alreadylocked_generationCount;
- (long long)generationCount;
- (void)unlock;
- (BOOL)managed;
- (BOOL)isVolatile;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)a0;
- (BOOL)isDirectModeEnabled;
- (void)alreadylocked_clearCache;
- (void)setDaemonCacheEnabled:(BOOL)a0;
- (void)setAccessRestricted:(BOOL)a0;
- (void)setFileProtectionClass:(int)a0;
- (struct __CFString { } *)userIdentifier;
- (struct __CFString { } *)domainIdentifier;
- (BOOL)isByHost;
- (struct __CFString { } *)container;
- (struct __CFString { } *)copyOSLogDescription;

@end
