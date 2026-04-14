@class NSArray;

@interface FCUserEventHistoryPruningPolicies : NSObject

@property (copy, nonatomic) NSArray *policies;

+ (id)defaultPolicy;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithPolicies:(id)a0;
- (id)description;

@end
