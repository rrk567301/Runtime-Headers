@class NSString, CCSQLCommandJoinCriterion;

@interface CCSQLCommandJoinTable : NSObject

@property (readonly, nonatomic) NSString *table;
@property (readonly, nonatomic) CCSQLCommandJoinCriterion *joinCriterion;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTable:(id)a0 joinCriterion:(id)a1;

@end
