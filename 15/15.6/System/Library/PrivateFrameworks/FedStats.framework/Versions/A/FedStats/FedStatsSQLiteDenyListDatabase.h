@class NSString, FedStatsSQLiteDatabase;

@interface FedStatsSQLiteDenyListDatabase : NSObject

@property (readonly, copy, nonatomic) FedStatsSQLiteDatabase *denyListDB;
@property (readonly, copy, nonatomic) NSString *tableName;
@property (readonly, copy, nonatomic) NSString *columnName;
@property (readonly) FedStatsSQLiteDatabase *sqliteDB;

+ (id)databaseWithFileURL:(id)a0 tableName:(id)a1 columnName:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)initWithDenyList:(id)a0 tableName:(id)a1 columnName:(id)a2;
- (char)isInDenyList:(id)a0 partialMatch:(char)a1;

@end
