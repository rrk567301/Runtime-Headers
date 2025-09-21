@interface CKDMetadataCacheMigrator : NSObject <CKSQLiteDelegate>

@property (readonly, nonatomic) int userVersion;

- (char)migrateDatabase:(id)a0 fromVersion:(int)a1;

@end
