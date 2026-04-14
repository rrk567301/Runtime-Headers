@interface SignpostSupportSubsystemCategoryBlacklist : SignpostSupportSubsystemCategoryFilter

- (id)initWithEntries:(id)a0;
- (BOOL)passesSubsystem:(id)a0 category:(id)a1;
- (BOOL)_wantsNotSubsystem;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (unsigned long long)_compoundPredicateType;
- (id)liveStreamingPredicate;

@end
