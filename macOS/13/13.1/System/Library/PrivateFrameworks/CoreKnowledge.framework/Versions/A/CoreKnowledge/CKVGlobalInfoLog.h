@class CKVDictionaryLog;

@interface CKVGlobalInfoLog : NSObject {
    CKVDictionaryLog *_log;
}

- (void).cxx_destruct;
- (id)schemaVersion;
- (unsigned char)enablementOptions;
- (id)allLanguageCodes;
- (id)initWithRootDirectory:(id)a0;
- (BOOL)updateSchemaVersion:(id)a0;
- (BOOL)updateEnablementOptions:(unsigned char)a0;
- (BOOL)updateAllLanguageCodes:(id)a0;
- (id)lastMigration;
- (id)migratedBuildVersion;
- (id)migratedProjectVersion;
- (BOOL)recordMigrationWithBuildVersion:(id)a0 projectVersion:(id)a1 enablementOptions:(unsigned char)a2 allLanguageCodes:(id)a3;
- (id)migrationAttempts;
- (BOOL)recordMigrationAttempt;

@end
