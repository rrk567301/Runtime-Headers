@interface SMMigrateGroups : SMMigrationEngineStep

- (BOOL)createGroup:(id)a0 inDB:(id)a1;
- (id)createGroupsInDB:(id)a0;
- (BOOL)deleteGroup:(id)a0 inDB:(id)a1;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (BOOL)migrateGroups;
- (id)postProcess;

@end
