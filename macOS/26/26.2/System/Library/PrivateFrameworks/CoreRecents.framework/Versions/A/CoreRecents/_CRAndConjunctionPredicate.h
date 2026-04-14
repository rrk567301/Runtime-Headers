@class NSArray;

@interface _CRAndConjunctionPredicate : CRSearchPredicate

@property (readonly, copy) NSArray *subpredicates;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)asNSPredicate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubpredicates:(id)a0;

@end
