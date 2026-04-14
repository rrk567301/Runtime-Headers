@class NSArray, NSSet;

@interface ATXContextHeuristicResult : NSObject

@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSSet *additionalRefreshTriggers;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSuggestions:(id)a0 additionalRefreshTriggers:(id)a1;

@end
