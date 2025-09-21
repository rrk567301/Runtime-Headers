@class ABUserDefaults;

@interface ABPreferencesMigrator : NSObject {
    ABUserDefaults *_defaults;
}

+ (void)migrateDefaults:(id)a0;

- (void)dealloc;
- (id)initWithDefaults:(id)a0;
- (void)migrateDefaults;
- (char)birthdayVisiblePreferenceExists;
- (void)enablePrivateMeCardFields;
- (char)hasPrivateMeCardFields;
- (long long)preferencesVersion;
- (char)privateMeCardFieldsEnabledPreferenceExists;
- (void)updateBirthdayVisiblePreferenceFromVersion:(long long)a0;
- (void)updatePreferencesVersionFromVersion:(long long)a0;
- (void)updatePrivateMeCardPreferencesFromVersion:(long long)a0;

@end
