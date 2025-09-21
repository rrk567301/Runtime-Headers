@protocol PLCloudPersistentHistoryMigratorContext;

@interface PLCloudPersistentHistoryMigrator : NSObject {
    id<PLCloudPersistentHistoryMigratorContext> _migratorContext;
}

+ (void)migrateToPersistentHistoryIfNecessaryWithMigratorContext:(id)a0;

- (long long)migrate;
- (void)migrateToPersistentHistoryIfNecessary;
- (id)initWithMigratorContext:(id)a0;
- (void).cxx_destruct;

@end
