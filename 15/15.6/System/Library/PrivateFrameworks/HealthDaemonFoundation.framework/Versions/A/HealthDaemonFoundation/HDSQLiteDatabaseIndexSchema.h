@class NSString, NSArray;

@interface HDSQLiteDatabaseIndexSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *columns;
@property (nonatomic) char isUnique;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
