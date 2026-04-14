@class NSArray;

@interface FCUserEventHistoryPruningPolicies : NSObject

@property (copy, nonatomic) NSArray *policies;

+ (id)defaultPolicy;

- (id)initWithPolicies:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
