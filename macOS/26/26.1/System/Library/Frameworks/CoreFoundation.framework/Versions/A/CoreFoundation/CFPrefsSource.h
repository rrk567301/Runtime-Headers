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

- (void)unlock;
- (BOOL)synchronize;
- (long long)generationCount;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)a0;
- (struct __CFString { } *)userIdentifier;
- (struct __CFString { } *)container;
- (struct __CFString { } *)domainIdentifier;
- (void)setEnabled:(BOOL)a0;
- (void)handleReply:(id)a0 toRequestNewDataMessage:(id)a1 onConnection:(id)a2 retryCount:(int)a3 error:(BOOL *)a4;
- (id)initWithContainingPreferences:(id)a0;
- (void *)alreadylocked_copyValueForKey:(struct __CFString { } *)a0;
- (void)setStoreName:(struct __CFString { } *)a0;
- (id)createRequestNewContentMessageForDaemon:(int)a0;
- (struct __CFArray { } *)alreadylocked_copyKeyList;
- (BOOL)managed;
- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;
- (long long)alreadylocked_generationCount;
- (void)setConfigurationPath:(struct __CFString { } *)a0;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (void *)copyValueForKey:(struct __CFString { } *)a0;
- (struct __CFString { } *)copyOSLogDescription;
- (void)lock;
- (void)alreadylocked_clearCache;
- (struct __CFDictionary { } *)alreadylocked_copyDictionary;
- (id)description;
- (void)dealloc;
- (BOOL)isVolatile;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)a0 forRole:(int *)a1;
- (id)copyVolatileSourceWithContainingPreferences:(id)a0;
- (BOOL)isDirectModeEnabled;
- (void)setAccessRestricted:(BOOL)a0;
- (void)setDaemonCacheEnabled:(BOOL)a0;
- (int)alreadylocked_updateObservingRemoteChanges;
- (void)setFileProtectionClass:(int)a0;
- (BOOL)isByHost;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)a0;
- (void)mergeIntoDictionary:(struct __CFDictionary { } *)a0 sourceDictionary:(struct __CFDictionary { } *)a1 cloudKeyEvaluator:(id /* block */)a2;

@end
