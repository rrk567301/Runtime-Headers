@interface SignpostSupportPIDBlacklist : SignpostSupportPIDFilter

- (unsigned long long)_compoundPredicateType;
- (char)_wantsNotEqual;
- (char)passesPIDNumber:(id)a0;

@end
