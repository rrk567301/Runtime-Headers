@class ADMUser, MCXPrefObject;

@interface FCMCXHelper : NSObject {
    ADMUser *_admUser;
    MCXPrefObject *_mcxManager;
}

+ (id)mcxHelperForManager:(id)a0;
+ (id)mcxHelperForUser:(id)a0;

- (void)dealloc;
- (id)initWithUser:(id)a0;
- (id)MCXRAWDict;
- (BOOL)hasSettingsForDomains:(id)a0;
- (id)initWithMCXManager:(id)a0;
- (void)removeForcedPrefsDictionaryForDomains:(id)a0;
- (id)forcedPrefsObjectForKey:(id)a0 inDomain:(id)a1;
- (void)setForcedPrefsObject:(id)a0 forKey:(id)a1 inDomain:(id)a2;
- (void)removeForcedPrefsObjectForKey:(id)a0 inDomain:(id)a1;
- (id)forcedPrefsDictionaryForDomain:(id)a0;
- (void)setForcedPrefsDictionary:(id)a0 inDomain:(id)a1;
- (void)readSettings;
- (void)synchronizePrefs;

@end
