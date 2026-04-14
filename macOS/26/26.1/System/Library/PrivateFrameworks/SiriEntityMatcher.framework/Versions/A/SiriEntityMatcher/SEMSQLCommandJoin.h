@class NSString, SEMSQLCommandJoinCriterion;

@interface SEMSQLCommandJoin : NSObject

@property (readonly, nonatomic) NSString *table;
@property (readonly, nonatomic) SEMSQLCommandJoinCriterion *joinCriterion;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTable:(id)a0 joinCriterion:(id)a1;

@end
