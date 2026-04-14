@class NSArray;

@interface CCSQLCommandJoin : NSObject

@property (readonly, nonatomic) long long joinType;
@property (readonly, nonatomic) NSArray *joinTables;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithJoinType:(long long)a0 joinTables:(id)a1;

@end
