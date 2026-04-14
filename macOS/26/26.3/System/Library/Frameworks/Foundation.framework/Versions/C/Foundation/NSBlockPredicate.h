@interface NSBlockPredicate : NSPredicate {
    id /* block */ _block;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)initWithBlock:(id /* block */)a0;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id /* block */)_predicateBlock;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)predicateWithSubstitutionVariables:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
