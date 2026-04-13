@class NSString, NSMutableDictionary;

@interface KHDBIncrementalUpgrader : NSObject {
    NSString *m_databasePath;
    NSMutableDictionary *m_usedDatabaseMgrsByName;
    long long m_upgradingFromMajorVersion;
    long long m_upgradingFromMinorVersion;
}

- (void)dealloc;
- (void)close;
- (id)databaseDirectoryPath;
- (id)dbMgrForDatabaseName:(id)a0;
- (void)incrementalAddField:(id)a0 toDatabase:(id)a1 forEntity:(id)a2 defaultValue:(id)a3 createIndex:(BOOL)a4;
- (id)initWithDatabaseDirPath:(id)a0;
- (void)incrementalAddField:(id)a0 toDatabase:(id)a1 forEntity:(id)a2 defaultValue:(id)a3;
- (void)incrementalAddIndexForField:(id)a0 toDatabase:(id)a1 forEntity:(id)a2;
- (void)incrementalAddIndexForFields:(id)a0 toDatabase:(id)a1 forEntity:(id)a2;
- (long long)upgradingFromMajorVersion;
- (long long)upgradingFromMinorVersion;
- (void)setUpgradingFromMajorVersion:(long long)a0 minorVersion:(long long)a1;
- (void)readVersionNumbers;
- (BOOL)incrementalSchemaUpgrade;
- (void)incrementalDataUpgradeForDatabase:(id)a0;

@end
