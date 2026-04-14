@class NSNumber, NSUUID, NSString;

@interface CKSQLiteDatabaseRegistryEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *databaseID;
@property (retain, nonatomic) NSUUID *databaseUUID;
@property (retain, nonatomic) NSString *databaseDirectory;

+ (Class)tableClass;

- (void).cxx_destruct;

@end
