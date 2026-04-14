@class NSArray;

@interface CKVSQLCommandOrder : NSObject <NSCopying>

@property (readonly, nonatomic) long long orderMode;
@property (readonly, nonatomic) NSArray *columnNames;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOrderMode:(long long)a0 columnNames:(id)a1;

@end
