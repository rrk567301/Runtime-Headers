@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator {
    unsigned long long _flags;
    NSSubstringPredicateOperator *_stringVersion;
}

+ (BOOL)supportsSecureCoding;

- (id)minimalFormInContext:(id)a0 ofPredicate:(id)a1;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)options;
- (void)_setOptions:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)symbol;
- (unsigned long long)flags;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;
- (id)stringVersion;

@end
