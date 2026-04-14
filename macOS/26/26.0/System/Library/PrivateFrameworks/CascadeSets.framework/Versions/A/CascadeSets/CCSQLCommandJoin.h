@class NSArray;

@interface CCSQLCommandJoin : NSObject

@property (readonly, nonatomic) long long joinType;
@property (readonly, nonatomic) NSArray *joinTables;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithJoinType:(long long)a0 joinTables:(id)a1;

@end
