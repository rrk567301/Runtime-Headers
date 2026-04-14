@class NSDictionary;

@interface ATXInfoSuggestionCriterionRegistry : NSObject {
    NSDictionary *_registry;
}

- (long long)confidenceLevelForCriterion:(id)a0 sourceIdentifier:(id)a1;
- (BOOL)isSourceIdentifierRegistered:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)availableCriterionIdentifiersForSourceIdentifier:(id)a0;

@end
