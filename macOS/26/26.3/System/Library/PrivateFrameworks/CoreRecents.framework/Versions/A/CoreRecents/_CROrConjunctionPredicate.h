@class NSArray;

@interface _CROrConjunctionPredicate : CRSearchPredicate

@property (readonly, copy) NSArray *subpredicates;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)asNSPredicate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSubpredicates:(id)a0;

@end
