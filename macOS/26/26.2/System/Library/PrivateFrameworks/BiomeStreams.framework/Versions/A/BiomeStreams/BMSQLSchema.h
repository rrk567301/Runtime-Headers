@class NSString, NSArray;

@interface BMSQLSchema : NSObject

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSArray *columns;

+ (id)new;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTableName:(id)a0 columns:(id)a1;
- (id)description;
- (id)createTableSQL;
- (id)insertSQL;
- (id)init;

@end
