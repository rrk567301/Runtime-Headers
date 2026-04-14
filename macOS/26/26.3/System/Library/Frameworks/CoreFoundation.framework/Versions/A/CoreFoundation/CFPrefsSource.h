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

- (struct __CFString { } *)container;
- (struct __CFString { } *)domainIdentifier;
- (long long)generationCount;
- (int)alreadylocked_updateObservingRemoteChanges;
- (id)copyVolatileSourceWithContainingPreferences:(id)a0;
- (struct __CFArray { } *)alreadylocked_copyKeyList;
- (void)setAccessRestricted:(BOOL)a0;
- (struct __CFString { } *)copyOSLogDescription;
- (void)setStoreName:(struct __CFString { } *)a0;
- (void)setConfigurationPath:(struct __CFString { } *)a0;
- (void)alreadylocked_clearCache;
- (id)description;
- (long long)alreadylocked_generationCount;
- (void)setDaemonCacheEnabled:(BOOL)a0;
- (struct __CFString { } *)userIdentifier;
- (void)setEnabled:(BOOL)a0;
- (BOOL)managed;
- (void)handleReply:(id)a0 toRequestNewDataMessage:(id)a1 onConnection:(id)a2 retryCount:(int)a3 error:(BOOL *)a4;
- (BOOL)isByHost;
- (void)setFileProtectionClass:(int)a0;
- (void)unlock;
- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)a0 forRole:(int *)a1;
- (void *)copyValueForKey:(struct __CFString { } *)a0;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)a0;
- (struct __CFDictionary { } *)alreadylocked_copyDictionary;
- (void)lock;
- (void)dealloc;
- (BOOL)isVolatile;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)a0;
- (void *)alreadylocked_copyValueForKey:(struct __CFString { } *)a0;
- (BOOL)synchronize;
- (void)mergeIntoDictionary:(struct __CFDictionary { } *)a0 sourceDictionary:(struct __CFDictionary { } *)a1 cloudKeyEvaluator:(id /* block */)a2;
- (BOOL)isDirectModeEnabled;
- (id)createRequestNewContentMessageForDaemon:(int)a0;
- (id)initWithContainingPreferences:(id)a0;

@end
