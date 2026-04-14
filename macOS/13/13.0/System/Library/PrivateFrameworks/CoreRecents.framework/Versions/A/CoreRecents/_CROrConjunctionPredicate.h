@class NSArray;

@interface _CROrConjunctionPredicate : CRSearchPredicate

@property (readonly, copy) NSArray *subpredicates;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)asNSPredicate;
- (id)initWithSubpredicates:(id)a0;

@end
