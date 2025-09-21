@interface XCTElementDisclosedChildRowsTransformer : XCTElementSetCodableTransformer <XCTCapabilitiesProviding>

+ (void)provideCapabilitiesToBuilder:(id)a0;

- (char)canBeRemotelyEvaluatedWithCapabilities:(id)a0;
- (id)elementTypes;
- (id)iteratorForInput:(id)a0;
- (id)requiredKeyPathsOrError:(id *)a0;
- (char)supportsAttributeKeyPathAnalysis;
- (id)transform:(id)a0 relatedElements:(id *)a1;

@end
