@class NSString, SEMSQLCommandJoinCriterion;

@interface SEMSQLCommandJoin : NSObject

@property (readonly, nonatomic) NSString *table;
@property (readonly, nonatomic) SEMSQLCommandJoinCriterion *joinCriterion;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithTable:(id)a0 joinCriterion:(id)a1;

@end
