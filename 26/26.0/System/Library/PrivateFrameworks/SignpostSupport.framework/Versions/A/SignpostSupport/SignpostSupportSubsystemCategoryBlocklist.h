@interface SignpostSupportSubsystemCategoryBlocklist : SignpostSupportSubsystemCategoryFilter

- (id)initWithEntries:(id)a0;
- (BOOL)passesSubsystem:(id)a0 category:(id)a1;
- (unsigned long long)_compoundPredicateType;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (BOOL)_wantsNotSubsystem;
- (void)addBlocklist:(id)a0;
- (id)liveStreamingPredicate;

@end
