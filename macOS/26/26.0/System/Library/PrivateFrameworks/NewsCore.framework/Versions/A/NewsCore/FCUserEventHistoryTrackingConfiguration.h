@class FCUserEventHistoryPruningPolicies;

@interface FCUserEventHistoryTrackingConfiguration : NSObject

@property (retain, nonatomic) FCUserEventHistoryPruningPolicies *pruningPolicies;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
