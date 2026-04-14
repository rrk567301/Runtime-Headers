@interface ATXStableContactRepresentationDatabase : ATXAbstractVersionedDatabase

- (long long)latestVersion;
- (BOOL)migrate;
- (BOOL)_runMigrationSteps:(id)a0;
- (id)stableContactIdentifier:(id)a0;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)a0 stableContactIdentifier:(id)a1;
- (id)init;
- (id)cnContactId:(id)a0;
- (id)deleteAllData;

@end
