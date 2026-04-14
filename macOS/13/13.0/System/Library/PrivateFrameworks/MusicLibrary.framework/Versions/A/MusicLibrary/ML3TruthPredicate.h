@interface ML3TruthPredicate : ML3Predicate {
    BOOL _truthValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)truePredicate;
+ (id)falsePredicate;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_predicateString;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (BOOL)isTrueAlways;
- (BOOL)isFalseAlways;

@end
