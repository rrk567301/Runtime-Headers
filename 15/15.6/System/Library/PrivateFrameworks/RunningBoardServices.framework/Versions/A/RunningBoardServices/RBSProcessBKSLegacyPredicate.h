@interface RBSProcessBKSLegacyPredicate : RBSProcessPredicateImpl

+ (id)legacyPredicate;
+ (id)legacyPredicateMatchingBundleIdentifier:(id)a0;
+ (id)legacyPredicateMatchingProcessIdentifier:(id)a0;

- (char)isEqual:(id)a0;
- (char)matchesProcess:(id)a0;

@end
