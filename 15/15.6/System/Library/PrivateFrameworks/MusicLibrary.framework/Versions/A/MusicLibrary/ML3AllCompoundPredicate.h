@interface ML3AllCompoundPredicate : ML3CompoundPredicate

+ (char)supportsSecureCoding;
+ (id)predicateByFlatteningAllCompoundPredicate:(id)a0;
+ (id)predicateByMergingContainmentPredicatesAllCompoundPredicate:(id)a0;

- (id)compoundOperatorJoiner;

@end
