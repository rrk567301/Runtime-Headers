@class NSDictionary;

@interface ATXInfoSuggestionCriterionRegistry : NSObject {
    NSDictionary *_registry;
}

- (id)init;
- (long long)confidenceLevelForCriterion:(id)a0 sourceIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)isSourceIdentifierRegistered:(id)a0;
- (id)availableCriterionIdentifiersForSourceIdentifier:(id)a0;

@end
