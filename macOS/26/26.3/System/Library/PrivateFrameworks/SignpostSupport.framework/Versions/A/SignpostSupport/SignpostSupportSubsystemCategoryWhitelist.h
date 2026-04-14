@interface SignpostSupportSubsystemCategoryWhitelist : SignpostSupportSubsystemCategoryFilter

- (BOOL)_wantsNotSubsystem;
- (BOOL)passesSubsystem:(id)a0 category:(id)a1;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (unsigned long long)_compoundPredicateType;
- (id)initWithEntries:(id)a0;

@end
