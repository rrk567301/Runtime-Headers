@interface PFCloudKitMetadataMigrationSQLUtilities : NSObject

@property (class, readonly, nonatomic) BOOL migrationDebugEnabled;

+ (id)tableNameFromStatement:(id)a0 withPrefix:(id)a1;

@end
