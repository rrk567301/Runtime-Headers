@class NSDictionary;

@interface ATXInfoSuggestionCriterionRegistry : NSObject {
    NSDictionary *_registry;
}

- (BOOL)isSourceIdentifierRegistered:(id)a0;
- (void).cxx_destruct;
- (long long)confidenceLevelForCriterion:(id)a0 sourceIdentifier:(id)a1;
- (id)init;
- (id)availableCriterionIdentifiersForSourceIdentifier:(id)a0;

@end
