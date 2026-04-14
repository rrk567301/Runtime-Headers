@interface CNCDDuplicateContainerMigrator : CNCDMigrator

+ (id)log;

- (void)migrate;
- (void)save;
- (BOOL)consolidateContainers:(id)a0;
- (BOOL)consolidateContainersIfNeeded;

@end
