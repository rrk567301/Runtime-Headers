@interface _DKEligibleForPredictionTombstoneRequirement : _DKTombstoneRequirement

- (id)propertiesToFetch;
- (id)eventPredicate;
- (id)identifier;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromPartialEvent:(id)a1;
- (id)predicate;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromEvent:(id)a1;
- (id)eligibleForPredictionKey;

@end
