@class NSDictionary;

@interface ATXInfoSuggestionCriterionRegistry : NSObject {
    NSDictionary *_registry;
}

- (id)availableCriterionIdentifiersForSourceIdentifier:(id)a0;
- (id)init;
- (long long)confidenceLevelForCriterion:(id)a0 sourceIdentifier:(id)a1;
- (BOOL)isSourceIdentifierRegistered:(id)a0;
- (void).cxx_destruct;

@end
