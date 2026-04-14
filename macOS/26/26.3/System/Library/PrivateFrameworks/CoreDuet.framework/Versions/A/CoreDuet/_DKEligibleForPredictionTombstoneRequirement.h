@interface _DKEligibleForPredictionTombstoneRequirement : _DKTombstoneRequirement

- (id)propertiesToFetch;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromEvent:(id)a1;
- (id)identifier;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromPartialEvent:(id)a1;
- (id)predicate;
- (id)eventPredicate;
- (id)eligibleForPredictionKey;

@end
