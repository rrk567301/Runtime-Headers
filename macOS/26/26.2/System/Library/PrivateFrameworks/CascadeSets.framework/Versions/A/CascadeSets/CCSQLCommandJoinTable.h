@class NSString, CCSQLCommandJoinCriterion;

@interface CCSQLCommandJoinTable : NSObject

@property (readonly, nonatomic) NSString *table;
@property (readonly, nonatomic) CCSQLCommandJoinCriterion *joinCriterion;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithTable:(id)a0 joinCriterion:(id)a1;

@end
