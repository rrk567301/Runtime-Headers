@class NSArray;

@interface _CRAndConjunctionPredicate : CRSearchPredicate

@property (readonly, copy) NSArray *subpredicates;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)asNSPredicate;
- (id)initWithCoder:(id)a0;
- (id)initWithSubpredicates:(id)a0;

@end
