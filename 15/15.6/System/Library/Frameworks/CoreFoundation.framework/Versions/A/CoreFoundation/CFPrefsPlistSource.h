@interface CFPrefsPlistSource : CFPrefsSource {
    struct __CFString { } *userIdentifier;
    struct __CFString { } *domainIdentifier;
    struct __CFString { } *container;
    _Atomic struct __CFDictionary *_locallySetDict;
    _Atomic char *accessPath;
    unsigned int userUID;
    _Atomic char _isByHost;
    _Atomic char _volatile;
    _Atomic char _readonly;
    _Atomic char _avoidsDaemonCache;
    _Atomic char _restrictedAccess;
    _Atomic char _checkedInvalidHome;
    _Atomic char _lastWriteFailed;
    _Atomic char _observing;
    _Atomic char _byteCountLimitExceeded;
    _Atomic char _directMode;
    _Atomic int _fileProtectionClass;
}

- (void)dealloc;
- (id)initWithDomain:(struct __CFString { } *)a0 user:(struct __CFString { } *)a1 byHost:(char)a2 containerPath:(struct __CFString { } *)a3 containingPreferences:(id)a4;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)a0 forRole:(int *)a1;
- (long long)generationCount;
- (void)alreadylocked_clearCache;
- (struct __CFDictionary { } *)alreadylocked_copyDictionary;
- (struct __CFArray { } *)alreadylocked_copyKeyList;
- (void *)alreadylocked_copyValueForKey:(struct __CFString { } *)a0;
- (long long)alreadylocked_generationCount;
- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;
- (int)alreadylocked_updateObservingRemoteChanges;
- (struct __CFString { } *)container;
- (void *)copyValueForKey:(struct __CFString { } *)a0;
- (id)createRequestNewContentMessageForDaemon:(int)a0;
- (id)createSynchronizeMessage;
- (struct __CFString { } *)domainIdentifier;
- (void)handleReply:(id)a0 toRequestNewDataMessage:(id)a1 onConnection:(id)a2 retryCount:(int)a3 error:(char *)a4;
- (char)isByHost;
- (char)isDirectModeEnabled;
- (char)isVolatile;
- (void)setAccessRestricted:(char)a0;
- (void)setDaemonCacheEnabled:(char)a0;
- (void)setFileProtectionClass:(int)a0;
- (char)synchronize;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(id /* block */)a0;
- (struct __CFString { } *)userIdentifier;

@end
