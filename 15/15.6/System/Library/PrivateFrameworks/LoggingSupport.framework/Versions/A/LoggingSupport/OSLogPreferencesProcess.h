@class NSString, NSDictionary, NSMutableDictionary;

@interface OSLogPreferencesProcess : NSObject {
    NSString *_systemPrefsFile;
    NSDictionary *_systemPrefs;
    NSString *_internalPrefsFile;
    NSDictionary *_internalPrefs;
    NSString *_prefsFile;
    NSMutableDictionary *_prefs;
}

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) char isLocked;
@property (readonly, nonatomic) long long effectiveEnabledLevel;
@property (readonly, nonatomic) long long effectivePersistedLevel;
@property (nonatomic) long long enabledLevel;
@property (nonatomic) long long persistedLevel;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0;
- (void)reset;
- (id)_levelPrefs;
- (long long)defaultEnabledLevel;
- (long long)defaultPersistedLevel;

@end
