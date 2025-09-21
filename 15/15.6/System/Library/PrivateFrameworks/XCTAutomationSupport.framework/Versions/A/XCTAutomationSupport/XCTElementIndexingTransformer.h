@class XCTIndexingTransformerIterator;

@interface XCTElementIndexingTransformer : XCTElementSetCodableTransformer

@property (readonly) unsigned long long elementIndex;
@property (retain) XCTIndexingTransformerIterator *currentIterator;

+ (char)supportsSecureCoding;
+ (void)provideCapabilitiesToBuilder:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)canBeRemotelyEvaluatedWithCapabilities:(id)a0;
- (id)initWithElementIndex:(unsigned long long)a0;
- (id)iteratorForInput:(id)a0;
- (id)requiredKeyPathsOrError:(id *)a0;
- (char)supportsAttributeKeyPathAnalysis;
- (id)transform:(id)a0 relatedElements:(id *)a1;

@end
