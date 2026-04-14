@interface ATXStableContactRepresentationDatabase : ATXAbstractVersionedDatabase

- (BOOL)migrate;
- (long long)latestVersion;
- (id)deleteAllData;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)a0 stableContactIdentifier:(id)a1;
- (id)stableContactIdentifier:(id)a0;
- (id)cnContactId:(id)a0;
- (id)init;
- (BOOL)_runMigrationSteps:(id)a0;

@end
