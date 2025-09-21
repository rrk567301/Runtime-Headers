@interface ATXStableContactRepresentationDatabase : ATXAbstractVersionedDatabase

- (BOOL)migrate;
- (long long)latestVersion;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)a0 stableContactIdentifier:(id)a1;
- (BOOL)_runMigrationSteps:(id)a0;
- (id)cnContactId:(id)a0;
- (id)init;
- (id)stableContactIdentifier:(id)a0;
- (id)deleteAllData;

@end
