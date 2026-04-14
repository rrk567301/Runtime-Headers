@protocol PLCloudPersistentHistoryMigratorContext;

@interface PLCloudPersistentHistoryMigrator : NSObject {
    id<PLCloudPersistentHistoryMigratorContext> _migratorContext;
}

+ (void)migrateToPersistentHistoryIfNecessaryWithMigratorContext:(id)a0;

- (long long)migrate;
- (void)migrateToPersistentHistoryIfNecessary;
- (void).cxx_destruct;
- (id)initWithMigratorContext:(id)a0;

@end
