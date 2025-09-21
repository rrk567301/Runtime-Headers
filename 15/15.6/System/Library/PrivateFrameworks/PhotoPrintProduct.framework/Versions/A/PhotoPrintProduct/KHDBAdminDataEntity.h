@class NSNumber, KHDBPreparedSql;

@interface KHDBAdminDataEntity : KHDBEntity {
    KHDBPreparedSql *m_updateTablePropertySql;
    KHDBPreparedSql *m_updateTableBlobPropertySql;
    KHDBPreparedSql *m_deletePropertySql;
    NSNumber *m_closedClean;
    char m_isDirty;
}

+ (int)typeForObject:(id)a0;

- (void)dealloc;
- (id)majorVersion;
- (id)minorVersion;
- (void)setMajorVersion:(id)a0;
- (void)setMinorVersion:(id)a0;
- (id)createDate;
- (void)invalidateAllModelIdsForEntity:(id)a0;
- (id)allModelIdsForEntity:(id)a0;
- (id)blobPropertyForArea:(id)a0 propertyName:(id)a1;
- (char)closedCleanly;
- (id)combinedUpgradePhase;
- (id)databaseUuid;
- (id)datePropertyForArea:(id)a0 propertyName:(id)a1;
- (void)deleteCombinedUpgradePhase;
- (void)deletePropertyForArea:(id)a0 propertyName:(id)a1;
- (id)deletePropertySql;
- (double)doublePropertyForArea:(id)a0 propertyName:(id)a1;
- (id)initWithTableName:(id)a0 forDatabaseManager:(id)a1 forDatabase:(id)a2;
- (void)invalidateNextIdForEntity:(id)a0;
- (void)markAsDirty:(char)a0;
- (unsigned long long)nextIdForEntity:(id)a0;
- (id)numberPropertyForArea:(id)a0 propertyName:(id)a1;
- (char)overridePersistFlagForPropertyArea:(id)a0 propertyName:(id)a1;
- (id)persistAfterRebuildProperties;
- (void)persistAfterRebuildPropertiesChanged;
- (char)propertyExistsForArea:(id)a0 propertyName:(id)a1;
- (id)propertyForArea:(id)a0 propertyName:(id)a1;
- (void)saveAllModelIds:(id)a0 forEntity:(id)a1;
- (void)setClosedCleanly:(char)a0;
- (void)setCombinedUpgradePhase:(id)a0;
- (void)setCreateDate:(id)a0;
- (void)setDatabaseUuid:(id)a0;
- (void)setEntityIsClosing:(char)a0;
- (void)setLastLaunchClosedClean;
- (void)setNextId:(unsigned long long)a0 forEntity:(id)a1;
- (void)setSyncDate:(id)a0 forDatabaseUuid:(id)a1;
- (id)stringPropertyForArea:(id)a0 propertyName:(id)a1;
- (id)syncDateForDatabaseUuid:(id)a0;
- (id)syncDates;
- (void)updateBlobProperty:(id)a0 propertyArea:(id)a1 propertyName:(id)a2;
- (void)updateBlobProperty:(id)a0 propertyArea:(id)a1 propertyName:(id)a2 persistAfterRebuild:(char)a3;
- (void)updateProperty:(id)a0 propertyArea:(id)a1 propertyName:(id)a2;
- (void)updateProperty:(id)a0 propertyArea:(id)a1 propertyName:(id)a2 persistAfterRebuild:(char)a3;
- (id)updateTableBlobPropertySql;
- (id)updateTablePropertySql;

@end
