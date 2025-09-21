@interface NSBlockPredicate : NSPredicate {
    id /* block */ _block;
}

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)_predicateBlock;
- (id)predicateFormat;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (char)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithBlock:(id /* block */)a0;
- (id)predicateWithSubstitutionVariables:(id)a0;

@end
