@class NSObject;
@protocol OS_xpc_object;

@interface _CFXPreferences : NSObject {
    struct __CFDictionary { } *_sources;
    struct __CFDictionary { } *_namedVolatileSources;
    struct __CFDictionary { } *_searchLists;
    NSObject<OS_xpc_object> *_daemonConnection;
    NSObject<OS_xpc_object> *_agentConnection;
    struct __CFDictionary { } *_agentConnectionsByUsername;
    NSObject<OS_xpc_object> *_directConnection;
    unsigned int _launchdUID;
    unsigned int _euid;
    unsigned int _nonLaunchPersonaUID;
    _Atomic char _userHomeDirectoryState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sourcesLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _searchListsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _namedVolatileSourcesLock;
    struct __CFSet { } *_groupContainersForCurrentUser;
}

+ (id)copyDefaultPreferences;

- (void)assertEquivalence:(BOOL)a0 ofIdentifiers:(struct __CFArray { } *)a1 users:(struct __CFArray { } *)a2 hosts:(struct __CFArray { } *)a3 containers:(struct __CFArray { } *)a4 managedFlags:(struct __CFArray { } *)a5 cloudFlags:(struct __CFArray { } *)a6;
- (void)setDaemonCacheEnabled:(BOOL)a0 identifier:(struct __CFString { } *)a1 user:(struct __CFString { } *)a2 host:(struct __CFString { } *)a3 container:(struct __CFString { } *)a4;
- (void)dealloc;
- (void)simulateTimerSynchronizeForTestingForUser:(struct __CFString { } *)a0;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1 appIdentifier:(struct __CFString { } *)a2 container:(struct __CFString { } *)a3 configurationURL:(struct __CFURL { } *)a4;
- (void *)copyAppValueForKey:(struct __CFString { } *)a0 identifier:(struct __CFString { } *)a1 container:(struct __CFString { } *)a2 configurationURL:(struct __CFURL { } *)a3;
- (void)unregisterUserDefaultsInstance:(id)a0;
- (BOOL)canLookUpAgents;
- (id)init;
- (void)resetPreferences:(BOOL)a0;
- (void)registerDefaultValues:(struct __CFDictionary { } *)a0;
- (void)registerUserDefaultsInstance:(id)a0 configurationURL:(struct __CFURL { } *)a1;
- (void)generateKVONotificationsForIdentifier:(struct __CFString { } *)a0 withOldValues:(id)a1 newValues:(id)a2;
- (void *)copyValueForKey:(struct __CFString { } *)a0 identifier:(struct __CFString { } *)a1 user:(struct __CFString { } *)a2 host:(struct __CFString { } *)a3 container:(struct __CFString { } *)a4;
- (void)assertEquivalence:(BOOL)a0 ofIdentifiers:(struct __CFArray { } *)a1 containers:(struct __CFArray { } *)a2 cloudConfigurationURLs:(struct __CFArray { } *)a3;

@end
