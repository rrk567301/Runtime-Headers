@class FCUserEventHistoryPruningPolicies;

@interface FCUserEventHistoryTrackingConfiguration : NSObject

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) FCUserEventHistoryPruningPolicies *pruningPolicies;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
