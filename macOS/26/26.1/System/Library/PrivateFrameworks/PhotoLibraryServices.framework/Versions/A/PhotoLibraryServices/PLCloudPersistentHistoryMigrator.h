@protocol PLCloudPersistentHistoryMigratorContext;

@interface PLCloudPersistentHistoryMigrator : NSObject {
    id<PLCloudPersistentHistoryMigratorContext> _migratorContext;
}

+ (void)migrateToPersistentHistoryIfNecessaryWithMigratorContext:(id)a0;

- (long long)migrate;
- (void).cxx_destruct;
- (void)migrateToPersistentHistoryIfNecessary;
- (id)initWithMigratorContext:(id)a0;

@end
