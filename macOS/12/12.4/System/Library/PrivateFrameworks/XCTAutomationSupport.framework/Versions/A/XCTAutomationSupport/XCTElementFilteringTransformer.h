@class NSPredicate;

@interface XCTElementFilteringTransformer : XCTElementSetCodableTransformer

@property (readonly) long long scope;
@property (readonly, copy) NSPredicate *predicate;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)transform:(id)a0 relatedElements:(id *)a1;
- (BOOL)canBeRemotelyEvaluatedWithCapabilities:(id)a0;
- (BOOL)supportsAttributeKeyPathAnalysis;
- (id)requiredKeyPathsOrError:(id *)a0;
- (id)iteratorForInput:(id)a0;
- (id)elementTypes;
- (id)_scopedExpansionOfInput:(id)a0;
- (id)initWithScope:(long long)a0 predicate:(id)a1;

@end
