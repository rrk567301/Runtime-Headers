@class NSString;

@interface HDSQLiteDatabaseColumnSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) char isAutoincrement;
@property (nonatomic) char isPrimaryKey;
@property (nonatomic) char isNullable;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSString *foreignKeyTargetTable;
@property (copy, nonatomic) NSString *foreignKeyTargetColumn;
@property (nonatomic) long long deletionAction;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
