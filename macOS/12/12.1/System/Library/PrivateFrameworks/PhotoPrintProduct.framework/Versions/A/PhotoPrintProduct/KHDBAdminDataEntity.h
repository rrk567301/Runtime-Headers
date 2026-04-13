@class NSNumber, KHDBPreparedSql;

@interface KHDBAdminDataEntity : KHDBEntity {
    KHDBPreparedSql *m_updateTablePropertySql;
    KHDBPreparedSql *m_updateTableBlobPropertySql;
    KHDBPreparedSql *m_deletePropertySql;
    NSNumber *m_closedClean;
    BOOL m_isDirty;
}

+ (int)typeForObject:(id)a0;

- (void)dealloc;
- (id)majorVersion;
- (id)minorVersion;
- (void)setMajorVersion:(id)a0;
- (void)setMinorVersion:(id)a0;
- (id)createDate;
- (id)initWithTableName:(id)a0 forDatabaseManager:(id)a1 forDatabase:(id)a2;
- (id)databaseUuid;
- (void)setDatabaseUuid:(id)a0;
- (void)setEntityIsClosing:(BOOL)a0;
- (void)setClosedCleanly:(BOOL)a0;
- (void)saveAllModelIds:(id)a0 forEntity:(id)a1;
- (void)invalidateNextIdForEntity:(id)a0;
- (unsigned long long)nextIdForEntity:(id)a0;
- (void)markAsDirty:(BOOL)a0;
- (void)setNextId:(unsigned long long)a0 forEntity:(id)a1;
- (id)allModelIdsForEntity:(id)a0;
- (BOOL)overridePersistFlagForPropertyArea:(id)a0 propertyName:(id)a1;
- (id)updateTablePropertySql;
- (void)persistAfterRebuildPropertiesChanged;
- (void)updateProperty:(id)a0 propertyArea:(id)a1 propertyName:(id)a2 persistAfterRebuild:(BOOL)a3;
- (id)updateTableBlobPropertySql;
- (void)updateBlobProperty:(id)a0 propertyArea:(id)a1 propertyName:(id)a2 persistAfterRebuild:(BOOL)a3;
- (id)deletePropertySql;
- (id)stringPropertyForArea:(id)a0 propertyName:(id)a1;
- (id)numberPropertyForArea:(id)a0 propertyName:(id)a1;
- (double)doublePropertyForArea:(id)a0 propertyName:(id)a1;
- (id)datePropertyForArea:(id)a0 propertyName:(id)a1;
- (id)blobPropertyForArea:(id)a0 propertyName:(id)a1;
- (void)deletePropertyForArea:(id)a0 propertyName:(id)a1;
- (void)updateProperty:(id)a0 propertyArea:(id)a1 propertyName:(id)a2;
- (void)updateBlobProperty:(id)a0 propertyArea:(id)a1 propertyName:(id)a2;
- (BOOL)propertyExistsForArea:(id)a0 propertyName:(id)a1;
- (id)propertyForArea:(id)a0 propertyName:(id)a1;
- (void)invalidateAllModelIdsForEntity:(id)a0;
- (void)setCreateDate:(id)a0;
- (id)syncDates;
- (id)syncDateForDatabaseUuid:(id)a0;
- (void)setSyncDate:(id)a0 forDatabaseUuid:(id)a1;
- (BOOL)closedCleanly;
- (void)setLastLaunchClosedClean;
- (id)combinedUpgradePhase;
- (void)setCombinedUpgradePhase:(id)a0;
- (void)deleteCombinedUpgradePhase;
- (id)persistAfterRebuildProperties;

@end
