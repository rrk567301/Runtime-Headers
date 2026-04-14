@interface SMMigrateGroups : SMMigrationEngineStep

- (id)postProcess;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (BOOL)migrateGroups;
- (id)createGroupsInDB:(id)a0;
- (BOOL)deleteGroup:(id)a0 inDB:(id)a1;
- (BOOL)createGroup:(id)a0 inDB:(id)a1;

@end
