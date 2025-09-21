@class NSDictionary;

@interface ATXInfoSuggestionCriterionRegistry : NSObject {
    NSDictionary *_registry;
}

- (id)init;
- (void).cxx_destruct;
- (id)availableCriterionIdentifiersForSourceIdentifier:(id)a0;
- (long long)confidenceLevelForCriterion:(id)a0 sourceIdentifier:(id)a1;
- (char)isSourceIdentifierRegistered:(id)a0;

@end
