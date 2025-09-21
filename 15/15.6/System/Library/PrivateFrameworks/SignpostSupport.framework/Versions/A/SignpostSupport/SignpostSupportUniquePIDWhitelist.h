@interface SignpostSupportUniquePIDWhitelist : SignpostSupportUniquePIDFilter

- (unsigned long long)_compoundPredicateType;
- (char)_wantsNotEqual;
- (char)passesUniquePIDNumber:(id)a0;

@end
