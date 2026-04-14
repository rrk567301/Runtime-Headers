@interface _DKEligibleForPredictionTombstoneRequirement : _DKTombstoneRequirement

- (id)propertiesToFetch;
- (id)predicate;
- (id)eventPredicate;
- (id)eligibleForPredictionKey;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromPartialEvent:(id)a1;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromEvent:(id)a1;
- (id)identifier;

@end
