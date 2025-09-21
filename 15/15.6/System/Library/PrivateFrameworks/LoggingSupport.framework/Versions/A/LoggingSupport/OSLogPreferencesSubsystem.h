@class NSString, NSArray, NSDictionary, NSMutableDictionary;

@interface OSLogPreferencesSubsystem : NSObject {
    NSDictionary *_systemPrefs;
    NSString *_internalPrefsFile;
    NSDictionary *_internalPrefs;
    NSString *_prefsFile;
    NSMutableDictionary *_prefs;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) char isLocked;
@property (readonly, nonatomic) long long effectiveEnabledLevel;
@property (readonly, nonatomic) long long effectivePersistedLevel;
@property (nonatomic) long long enabledLevel;
@property (nonatomic) long long persistedLevel;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)reset;
- (void)resetAll;
- (void)_setPersistedLevel:(long long)a0 forCategory:(id)a1;
- (void)_resetCategory:(id)a0;
- (long long)_defaultEnabledLevelForCategory:(id)a0;
- (long long)_defaultPersistedLevelForCategory:(id)a0;
- (long long)_enabledLevelForCategory:(id)a0;
- (id)_levelPrefsForCategory:(id)a0;
- (long long)_persistedLevelForCategory:(id)a0;
- (id)_prefsForCategory:(id)a0;
- (void)_setEnabledLevel:(long long)a0 forCategory:(id)a1;
- (void)_setSignpostAllowStreaming:(char)a0 forCategory:(id)a1;
- (void)_setSignpostBacktracesEnabled:(char)a0 forCategory:(id)a1;
- (void)_setSignpostEnabled:(char)a0 forCategory:(id)a1;
- (void)_setSignpostPersisted:(char)a0 forCategory:(id)a1;
- (char)_signpostAllowStreamingForCategory:(id)a0;
- (char)_signpostBacktracesEnabledForCategory:(id)a0;
- (char)_signpostEnabledForCategory:(id)a0;
- (char)_signpostPersistedForCategory:(id)a0;
- (long long)defaultEnabledLevel;
- (long long)defaultPersistedLevel;

@end
