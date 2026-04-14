@class NSString;

@interface HDSQLiteDatabaseTriggerSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSString *sql;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
