@interface CNCDDuplicateContainerMigrator : CNCDMigrator

+ (id)log;

- (void)save;
- (void)migrate;
- (BOOL)consolidateContainersIfNeeded;
- (void)consolidateContainers:(id)a0;

@end
