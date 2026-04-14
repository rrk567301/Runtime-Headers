@class ABUserDefaults;

@interface ABPreferencesMigrator : NSObject {
    ABUserDefaults *_defaults;
}

+ (void)migrateDefaults:(id)a0;

- (void)dealloc;
- (id)initWithDefaults:(id)a0;
- (void)migrateDefaults;
- (long long)preferencesVersion;
- (void)updatePreferencesVersionFromVersion:(long long)a0;
- (BOOL)privateMeCardFieldsEnabledPreferenceExists;
- (void)enablePrivateMeCardFields;
- (BOOL)hasPrivateMeCardFields;
- (void)updatePrivateMeCardPreferencesFromVersion:(long long)a0;
- (BOOL)birthdayVisiblePreferenceExists;
- (void)updateBirthdayVisiblePreferenceFromVersion:(long long)a0;

@end
