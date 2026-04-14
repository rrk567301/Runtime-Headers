@class NSString, NSArray;

@interface BMSQLSchema : NSObject

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSArray *columns;

+ (id)new;

- (id)createTableSQL;
- (id)initWithTableName:(id)a0 columns:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)insertSQL;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
