@class NSArray;

@interface NSCompoundPredicate : NSPredicate {
    unsigned long long _type;
    NSArray *_subpredicates;
}

@property (readonly) unsigned long long compoundPredicateType;
@property (readonly, copy) NSArray *subpredicates;

+ (BOOL)supportsSecureCoding;
+ (id)notPredicateWithSubpredicate:(id)a0;
+ (id)_operatorForType:(unsigned long long)a0;
+ (id)andPredicateWithSubpredicates:(id)a0;
+ (id)orPredicateWithSubpredicates:(id)a0;

- (id)_keypathsForDerivedPropertyValidation:(id *)a0;
- (id)minimalFormInContext:(id)a0;
- (void)allowEvaluation;
- (id)predicateWithSubstitutionVariables:(id)a0;
- (unsigned long long)hash;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)predicateFormat;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 subpredicates:(id)a1;
- (void)_acceptSubpredicates:(id)a0 flags:(unsigned long long)a1;
- (id)_copySubpredicateDescription:(id)a0;
- (id)_predicateOperator;
- (id)generateMetadataDescription;
- (id)predicateOperator;

@end
