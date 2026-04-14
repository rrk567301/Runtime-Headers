@interface SignpostSupportSubsystemCategoryBlocklist : SignpostSupportSubsystemCategoryFilter

- (BOOL)_wantsNotSubsystem;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (unsigned long long)_compoundPredicateType;
- (BOOL)passesSubsystem:(id)a0 category:(id)a1;
- (id)initWithEntries:(id)a0;
- (void)addBlocklist:(id)a0;
- (id)liveStreamingPredicate;

@end
