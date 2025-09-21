@class NSObject;
@protocol OS_dispatch_queue, OS_os_log, RadiosPreferencesDelegate;

@interface RadiosPreferences : NSObject {
    struct __SCPreferences { } *_prefs;
    int _applySkipCount;
    char _isCachedAirplaneModeValid;
    char _cachedAirplaneMode;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_os_log> *radios_prefs_log;
}

@property (nonatomic) char airplaneMode;
@property (nonatomic) id<RadiosPreferencesDelegate> delegate;
@property (nonatomic) char notifyForExternalChangeOnly;

- (oneway void)release;
- (void)dealloc;
- (id)init;
- (void)setValue:(void *)a0 forKey:(id)a1;
- (void)synchronize;
- (id)initWithQueue:(id)a0;
- (void)refresh;
- (char)telephonyStateWithBundleIdentifierOut:(id *)a0;
- (void *)getValueForKey:(id)a0;
- (void)setTelephonyState:(char)a0 fromBundleID:(id)a1;
- (void *)getValueWithLockForKey:(id)a0;
- (void)initializeSCPrefs:(id)a0;
- (void)notifyTarget:(unsigned int)a0;
- (void)setAirplaneModeInNSS:(char)a0;
- (void)setAirplaneModeWithoutMirroring:(char)a0;
- (void)setCallback:(void /* function */ *)a0 withContext:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a1;

@end
