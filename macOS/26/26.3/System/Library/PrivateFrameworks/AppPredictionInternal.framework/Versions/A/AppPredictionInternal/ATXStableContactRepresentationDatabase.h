@interface ATXStableContactRepresentationDatabase : ATXAbstractVersionedDatabase

- (long long)latestVersion;
- (BOOL)migrate;
- (id)cnContactId:(id)a0;
- (id)stableContactIdentifier:(id)a0;
- (id)init;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)a0 stableContactIdentifier:(id)a1;
- (BOOL)_runMigrationSteps:(id)a0;
- (id)deleteAllData;

@end
