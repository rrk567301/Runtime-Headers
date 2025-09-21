@interface SMMigrateGroupsStep : SMEngineStep

- (char)createGroup:(id)a0 inDB:(id)a1;
- (id)createGroupsInDB:(id)a0;
- (char)deleteGroup:(id)a0 inDB:(id)a1;
- (char)migrateGroups;
- (id)postProcess;

@end
