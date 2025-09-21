@class NSPredicate;

@interface XCTElementFilteringTransformer : XCTElementSetCodableTransformer

@property (readonly) long long scope;
@property (readonly, copy) NSPredicate *predicate;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_scopedExpansionOfInput:(id)a0;
- (char)canBeRemotelyEvaluatedWithCapabilities:(id)a0;
- (id)elementTypes;
- (id)initWithScope:(long long)a0 predicate:(id)a1;
- (id)iteratorForInput:(id)a0;
- (id)requiredKeyPathsOrError:(id *)a0;
- (char)supportsAttributeKeyPathAnalysis;
- (id)transform:(id)a0 relatedElements:(id *)a1;

@end
