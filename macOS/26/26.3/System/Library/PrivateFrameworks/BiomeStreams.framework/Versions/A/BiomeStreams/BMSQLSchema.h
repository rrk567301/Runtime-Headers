@class NSString, NSArray;

@interface BMSQLSchema : NSObject

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSArray *columns;

+ (id)new;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)createTableSQL;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTableName:(id)a0 columns:(id)a1;
- (id)insertSQL;

@end
