@interface SignpostSupportSubsystemCategoryBlacklist : SignpostSupportSubsystemCategoryFilter

- (id)initWithEntries:(id)a0;
- (BOOL)_wantsNotSubsystem;
- (BOOL)passesSubsystem:(id)a0 category:(id)a1;
- (unsigned long long)_compoundPredicateType;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (id)liveStreamingPredicate;

@end
