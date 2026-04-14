@interface ML3TruthPredicate : ML3Predicate {
    BOOL _truthValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)falsePredicate;
+ (id)truePredicate;

- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_predicateString;
- (BOOL)isFalseAlways;
- (BOOL)isTrueAlways;

@end
