@class NSObject;
@protocol OS_dispatch_queue, OS_os_log, RadiosPreferencesDelegate;

@interface RadiosPreferences : NSObject {
    struct __SCPreferences { } *_prefs;
    int _applySkipCount;
    BOOL _isCachedAirplaneModeValid;
    BOOL _cachedAirplaneMode;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_os_log> *radios_prefs_log;
}

@property (nonatomic) BOOL airplaneMode;
@property (nonatomic) id<RadiosPreferencesDelegate> delegate;
@property (nonatomic) BOOL notifyForExternalChangeOnly;

- (oneway void)release;
- (void)dealloc;
- (id)init;
- (void *)copyValueForKey:(id)a0;
- (void)setValue:(void *)a0 forKey:(id)a1;
- (void)synchronize;
- (id)initWithQueue:(id)a0;
- (void)refresh;
- (BOOL)telephonyStateWithBundleIdentifierOut:(id *)a0;
- (void)setTelephonyState:(BOOL)a0 fromBundleID:(id)a1;
- (struct __SCPreferences { } *)copySCPrefs:(BOOL)a0;
- (void *)copyValueWithLockForKey:(id)a0;
- (void)initializeSCPrefs;
- (void)notifyTarget:(unsigned int)a0;
- (void)setAirplaneModeInNSS:(BOOL)a0;
- (void)setAirplaneModeWithoutMirroring:(BOOL)a0;
- (void)setCallback:(void /* function */ *)a0 withContext:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a1;

@end
