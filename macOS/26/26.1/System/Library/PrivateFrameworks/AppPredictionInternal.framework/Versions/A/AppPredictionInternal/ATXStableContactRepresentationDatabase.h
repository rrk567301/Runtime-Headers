@interface ATXStableContactRepresentationDatabase : ATXAbstractVersionedDatabase

- (long long)latestVersion;
- (BOOL)migrate;
- (id)deleteAllData;
- (id)cnContactId:(id)a0;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)a0 stableContactIdentifier:(id)a1;
- (id)stableContactIdentifier:(id)a0;
- (BOOL)_runMigrationSteps:(id)a0;
- (id)init;

@end
