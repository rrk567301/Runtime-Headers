@class NSDictionary;

@interface HDSQLiteDatabaseSchema : NSObject

@property (retain, nonatomic) NSDictionary *tables;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
