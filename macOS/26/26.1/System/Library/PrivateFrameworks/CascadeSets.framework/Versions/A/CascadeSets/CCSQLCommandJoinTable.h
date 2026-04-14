@class NSString, CCSQLCommandJoinCriterion;

@interface CCSQLCommandJoinTable : NSObject

@property (readonly, nonatomic) NSString *table;
@property (readonly, nonatomic) CCSQLCommandJoinCriterion *joinCriterion;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTable:(id)a0 joinCriterion:(id)a1;

@end
