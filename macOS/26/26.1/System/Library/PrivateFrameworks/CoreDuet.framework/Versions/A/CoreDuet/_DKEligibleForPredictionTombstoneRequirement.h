@interface _DKEligibleForPredictionTombstoneRequirement : _DKTombstoneRequirement

- (id)eligibleForPredictionKey;
- (id)eventPredicate;
- (id)propertiesToFetch;
- (id)predicate;
- (id)identifier;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromEvent:(id)a1;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromPartialEvent:(id)a1;

@end
