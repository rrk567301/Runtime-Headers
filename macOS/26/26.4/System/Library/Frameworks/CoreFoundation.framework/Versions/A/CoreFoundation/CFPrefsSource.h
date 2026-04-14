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

- (long long)alreadylocked_generationCount;
- (struct __CFString { } *)domainIdentifier;
- (void)setStoreName:(struct __CFString { } *)a0;
- (struct __CFArray { } *)alreadylocked_copyKeyList;
- (void)setAccessRestricted:(BOOL)a0;
- (void)mergeIntoDictionary:(struct __CFDictionary { } *)a0 sourceDictionary:(struct __CFDictionary { } *)a1 cloudKeyEvaluator:(id /* block */)a2;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)a0;
- (BOOL)isByHost;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)a0 forRole:(int *)a1;
- (int)alreadylocked_updateObservingRemoteChanges;
- (BOOL)isVolatile;
- (BOOL)isDirectModeEnabled;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (void)handleReply:(id)a0 toRequestNewDataMessage:(id)a1 onConnection:(id)a2 retryCount:(int)a3 error:(BOOL *)a4;
- (id)createRequestNewContentMessageForDaemon:(int)a0;
- (struct __CFDictionary { } *)alreadylocked_copyDictionary;
- (void *)copyValueForKey:(struct __CFString { } *)a0;
- (void)setDaemonCacheEnabled:(BOOL)a0;
- (void)alreadylocked_clearCache;
- (void *)alreadylocked_copyValueForKey:(struct __CFString { } *)a0;
- (id)initWithContainingPreferences:(id)a0;
- (long long)generationCount;
- (id)copyVolatileSourceWithContainingPreferences:(id)a0;
- (void)setConfigurationPath:(struct __CFString { } *)a0;
- (struct __CFString { } *)copyOSLogDescription;
- (BOOL)managed;
- (void)setFileProtectionClass:(int)a0;
- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;
- (BOOL)synchronize;
- (void)unlock;
- (struct __CFString { } *)userIdentifier;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)a0;
- (struct __CFString { } *)container;
- (void)setEnabled:(BOOL)a0;
- (id)description;
- (void)lock;
- (void)dealloc;

@end
