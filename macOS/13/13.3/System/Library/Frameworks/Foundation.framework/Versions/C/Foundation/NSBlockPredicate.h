@interface NSBlockPredicate : NSPredicate {
    id /* block */ _block;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)predicateFormat;
- (id /* block */)_predicateBlock;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithBlock:(id /* block */)a0;
- (id)predicateWithSubstitutionVariables:(id)a0;

@end
