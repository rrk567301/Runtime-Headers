@class NSArray;

@interface CCSQLCommandJoin : NSObject

@property (readonly, nonatomic) long long joinType;
@property (readonly, nonatomic) NSArray *joinTables;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithJoinType:(long long)a0 joinTables:(id)a1;

@end
