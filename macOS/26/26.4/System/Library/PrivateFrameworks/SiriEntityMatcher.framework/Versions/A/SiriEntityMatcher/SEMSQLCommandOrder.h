@class NSArray;

@interface SEMSQLCommandOrder : NSObject <NSCopying>

@property (readonly, nonatomic) long long orderMode;
@property (readonly, nonatomic) NSArray *columnNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithOrderMode:(long long)a0 columnNames:(id)a1;

@end
