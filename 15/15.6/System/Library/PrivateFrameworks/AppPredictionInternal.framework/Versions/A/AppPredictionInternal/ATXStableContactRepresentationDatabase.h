@interface ATXStableContactRepresentationDatabase : ATXAbstractVersionedDatabase

- (id)init;
- (char)migrate;
- (id)deleteAllData;
- (long long)latestVersion;
- (char)_runMigrationSteps:(id)a0;
- (id)cnContactId:(id)a0;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)a0 stableContactIdentifier:(id)a1;
- (id)stableContactIdentifier:(id)a0;

@end
