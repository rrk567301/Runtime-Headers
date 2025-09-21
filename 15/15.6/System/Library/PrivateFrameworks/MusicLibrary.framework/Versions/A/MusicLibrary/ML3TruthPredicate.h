@interface ML3TruthPredicate : ML3Predicate {
    char _truthValue;
}

+ (char)supportsSecureCoding;
+ (id)falsePredicate;
+ (id)truePredicate;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_predicateString;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (char)isFalseAlways;
- (char)isTrueAlways;

@end
