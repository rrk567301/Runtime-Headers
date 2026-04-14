@interface CFPrefsPlistSource : CFPrefsSource {
    struct __CFString { } *userIdentifier;
    struct __CFString { } *domainIdentifier;
    struct __CFString { } *container;
    _Atomic struct __CFDictionary *_locallySetDict;
    _Atomic char *accessPath;
    _Atomic BOOL _isByHost;
    _Atomic BOOL _volatile;
    _Atomic BOOL _readonly;
    _Atomic BOOL _avoidsDaemonCache;
    _Atomic BOOL _restrictedAccess;
    _Atomic BOOL _checkedInvalidHome;
    _Atomic BOOL _lastWriteFailed;
    _Atomic BOOL _observing;
    _Atomic BOOL _byteCountLimitExceeded;
    _Atomic BOOL _directMode;
    _Atomic int _fileProtectionClass;
}

- (void)dealloc;
- (struct __CFString { } *)container;
- (int)alreadylocked_updateObservingRemoteChanges;
- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;
- (struct __CFString { } *)domainIdentifier;
- (void *)alreadylocked_copyValueForKey:(struct __CFString { } *)a0;
- (struct __CFDictionary { } *)alreadylocked_copyDictionary;
- (struct __CFArray { } *)alreadylocked_copyKeyList;
- (struct __CFString { } *)userIdentifier;
- (BOOL)isByHost;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)a0 forRole:(int *)a1;
- (void *)copyValueForKey:(struct __CFString { } *)a0;
- (BOOL)synchronize;
- (id)createRequestNewContentMessageForDaemon:(int)a0;
- (void)handleReply:(id)a0 toRequestNewDataMessage:(id)a1 onConnection:(id)a2 retryCount:(int)a3 error:(BOOL *)a4;
- (long long)alreadylocked_generationCount;
- (long long)generationCount;
- (BOOL)isVolatile;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)a0;
- (BOOL)isDirectModeEnabled;
- (void)alreadylocked_clearCache;
- (void)setDaemonCacheEnabled:(BOOL)a0;
- (void)setAccessRestricted:(BOOL)a0;
- (void)setFileProtectionClass:(int)a0;
- (id)initWithDomain:(struct __CFString { } *)a0 user:(struct __CFString { } *)a1 byHost:(BOOL)a2 containerPath:(struct __CFString { } *)a3 containingPreferences:(id)a4;
- (id)createSynchronizeMessage;

@end
