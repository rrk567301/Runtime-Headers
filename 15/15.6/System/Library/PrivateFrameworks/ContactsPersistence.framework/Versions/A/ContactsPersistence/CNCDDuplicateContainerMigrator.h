@interface CNCDDuplicateContainerMigrator : CNCDMigrator

+ (id)log;

- (void)save;
- (void)migrate;
- (char)consolidateContainers:(id)a0;
- (char)consolidateContainersIfNeeded;

@end
