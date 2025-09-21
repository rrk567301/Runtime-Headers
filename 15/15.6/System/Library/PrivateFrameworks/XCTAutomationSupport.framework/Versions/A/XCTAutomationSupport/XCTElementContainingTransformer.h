@class NSPredicate;

@interface XCTElementContainingTransformer : XCTElementSetCodableTransformer

@property (readonly, copy) NSPredicate *predicate;

+ (char)supportsSecureCoding;
+ (void)provideCapabilitiesToBuilder:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPredicate:(id)a0;
- (char)_elementMatches:(id)a0 relatedElement:(id *)a1;
- (char)canBeRemotelyEvaluatedWithCapabilities:(id)a0;
- (id)elementTypes;
- (id)iteratorForInput:(id)a0;
- (id)requiredKeyPathsOrError:(id *)a0;
- (char)supportsAttributeKeyPathAnalysis;
- (id)transform:(id)a0 relatedElements:(id *)a1;

@end
