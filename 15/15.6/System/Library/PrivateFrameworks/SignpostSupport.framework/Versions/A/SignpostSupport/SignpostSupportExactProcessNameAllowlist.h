@interface SignpostSupportExactProcessNameAllowlist : SignpostSupportExactProcessNameFilter

- (unsigned long long)_compoundPredicateType;
- (char)_wantsNotEqual;
- (char)passesProcessName:(id)a0;

@end
