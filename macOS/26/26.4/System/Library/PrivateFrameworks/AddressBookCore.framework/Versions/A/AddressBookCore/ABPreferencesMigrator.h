@class ABUserDefaults;

@interface ABPreferencesMigrator : NSObject {
    ABUserDefaults *_defaults;
}

+ (void)migrateDefaults:(id)a0;

- (id)initWithDefaults:(id)a0;
- (void)dealloc;
- (void)migrateDefaults;
- (BOOL)birthdayVisiblePreferenceExists;
- (void)enablePrivateMeCardFields;
- (BOOL)hasPrivateMeCardFields;
- (long long)preferencesVersion;
- (BOOL)privateMeCardFieldsEnabledPreferenceExists;
- (void)updateBirthdayVisiblePreferenceFromVersion:(long long)a0;
- (void)updatePreferencesVersionFromVersion:(long long)a0;
- (void)updatePrivateMeCardPreferencesFromVersion:(long long)a0;

@end
