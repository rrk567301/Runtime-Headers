@class NSObject, _CFXPreferences;
@protocol OS_voucher;

@interface _CFXPreferencesHandle : NSObject {
    _CFXPreferences *prefs;
    _CFXPreferences *nonLaunchPersonaPrefs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned int overrideEUID;
    unsigned int nonLaunchPersonaID;
    BOOL cachedUseLaunchPersona;
    NSObject<OS_voucher> *lastCheckedVoucher;
    BOOL processCanHaveMultiplePersonas;
}

- (id)copyPrefs;
- (void)setNonLaunchPersonaOverride:(unsigned int)a0;
- (void)forEachPrefsPerformBlock:(id /* block */)a0;
- (void)setEUIDOverride:(unsigned int)a0;
- (id)init;
- (void)dealloc;

@end
