@interface _DKAppUsageTombstoneRequirement : _DKTombstoneRequirement

- (id)propertiesToFetch;
- (id)eventPredicate;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromPartialEvent:(id)a1;
- (id)predicate;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromEvent:(id)a1;

@end
