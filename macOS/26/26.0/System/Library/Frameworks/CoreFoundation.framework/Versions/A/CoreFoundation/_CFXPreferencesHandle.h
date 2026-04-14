@class _CFXPreferences;

@interface _CFXPreferencesHandle : NSObject {
    _CFXPreferences *prefs;
    _CFXPreferences *nonLaunchPersonaPrefs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned int overrideEUID;
    unsigned int nonLaunchPersonaID;
    BOOL checkedProcessCanHaveMultiplePersonas;
    BOOL processCanHaveMultiplePersonas;
}

- (void)setNonLaunchPersonaOverride:(unsigned int)a0;
- (void)dealloc;
- (id)copyPrefs;
- (id)init;
- (void)forEachPrefsPerformBlock:(id /* block */)a0;
- (void)setEUIDOverride:(unsigned int)a0;

@end
