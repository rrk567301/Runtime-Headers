@class NSString, CCSQLCommandJoinCriterion;

@interface CCSQLCommandJoinTable : NSObject

@property (readonly, nonatomic) NSString *table;
@property (readonly, nonatomic) long long joinType;
@property (readonly, nonatomic) CCSQLCommandJoinCriterion *joinCriterion;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithTable:(id)a0 joinType:(long long)a1 joinCriterion:(id)a2;

@end
