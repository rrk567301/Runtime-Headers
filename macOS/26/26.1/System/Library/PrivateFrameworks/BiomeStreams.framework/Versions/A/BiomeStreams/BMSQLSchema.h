@class NSString, NSArray;

@interface BMSQLSchema : NSObject

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSArray *columns;

+ (id)new;

- (unsigned long long)hash;
- (id)insertSQL;
- (id)description;
- (id)createTableSQL;
- (id)initWithTableName:(id)a0 columns:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
