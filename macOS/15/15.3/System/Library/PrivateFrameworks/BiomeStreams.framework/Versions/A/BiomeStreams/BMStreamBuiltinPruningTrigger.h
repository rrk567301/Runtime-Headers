@class NSString, NSPredicate;

@interface BMStreamBuiltinPruningTrigger : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long platforms;
@property (readonly, nonatomic) NSPredicate *triggerCondition;
@property (readonly, nonatomic) NSPredicate *pruningPredicate;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 platforms:(unsigned long long)a1 triggerCondition:(id)a2 pruningPredicate:(id)a3;
- (id)initWithIdentifier:(id)a0 predicate:(id)a1;

@end
