@interface SignpostSupportSubsystemCategoryAllowlist : SignpostSupportSubsystemCategoryFilter

- (id)initWithEntries:(id)a0;
- (unsigned long long)_compoundPredicateType;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (char)_wantsNotSubsystem;
- (void)addAllowlist:(id)a0;
- (char)passesSubsystem:(id)a0 category:(id)a1;

@end
