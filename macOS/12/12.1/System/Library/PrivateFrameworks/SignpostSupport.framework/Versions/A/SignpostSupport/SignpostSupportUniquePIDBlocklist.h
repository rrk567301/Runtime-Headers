@interface SignpostSupportUniquePIDBlocklist : SignpostSupportUniquePIDFilter

- (BOOL)passesUniquePIDNumber:(id)a0;
- (unsigned long long)_compoundPredicateType;
- (BOOL)_wantsNotEqual;

@end
