@interface EKRepliedEventPredicate : EKGeneralLookupPredicate

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)predicateForCoreData;

@end
