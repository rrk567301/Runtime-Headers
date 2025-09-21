@interface ISRootMigrator : ISMigrator

@property (nonatomic) char isErase;
@property (nonatomic) char isRestoreFromBackup;

- (char)performMigration;
- (id)performMigrationForPreferences:(id)a0;
- (id)appendRegionalVariantsToLanguageIdentifiers:(id)a0 regionCode:(id)a1;
- (void)copyLanguagesAndLocaleToSystem;
- (void)fixSystemLanguagesMismatchForSingleUserSystem;
- (id)importPreferredLanguagesForPreferences:(id)a0;
- (id)importPreferredLanguages_macOS_10_9_forPreferences:(id)a0;
- (id)performMigrationForUserPreferences:(id)a0 systemPreferences:(id)a1;
- (char)systemLanguagesMismatch;
- (void)updateAppleLanguagesSchemaVersionToCurrent;

@end
