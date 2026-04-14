@interface CNCDDuplicateContainerMigrator : CNCDMigrator

+ (id)log;

- (void)save;
- (void)migrate;
- (void)consolidateContainers:(id)a0;
- (BOOL)consolidateContainersIfNeeded;

@end
