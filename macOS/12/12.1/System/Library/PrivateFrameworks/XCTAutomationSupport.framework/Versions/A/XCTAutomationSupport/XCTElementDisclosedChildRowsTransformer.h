@class NSString;

@interface XCTElementDisclosedChildRowsTransformer : XCTElementSetCodableTransformer <XCTCapabilitiesProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)provideCapabilitiesToBuilder:(id)a0;

- (id)transform:(id)a0 relatedElements:(id *)a1;
- (BOOL)canBeRemotelyEvaluatedWithCapabilities:(id)a0;
- (BOOL)supportsAttributeKeyPathAnalysis;
- (id)requiredKeyPathsOrError:(id *)a0;
- (id)iteratorForInput:(id)a0;
- (id)elementTypes;

@end
