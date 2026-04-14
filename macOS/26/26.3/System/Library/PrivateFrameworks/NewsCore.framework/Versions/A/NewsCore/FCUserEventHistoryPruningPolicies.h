@class NSArray;

@interface FCUserEventHistoryPruningPolicies : NSObject

@property (copy, nonatomic) NSArray *policies;

+ (id)defaultPolicy;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithPolicies:(id)a0;

@end
