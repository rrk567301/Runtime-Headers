@interface RBSProcessBKSLegacyPredicate : RBSProcessPredicateImpl

+ (id)legacyPredicateMatchingProcessIdentifier:(id)a0;
+ (id)legacyPredicateMatchingBundleIdentifier:(id)a0;
+ (id)legacyPredicate;

- (BOOL)matchesProcess:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
