@class NSArray, NSString;

@interface XCTElementSortingTransformer : XCTElementSetCodableTransformer <XCTCapabilitiesProviding>

@property (readonly, copy) NSArray *sortDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (void)provideCapabilitiesToBuilder:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)transform:(id)a0 relatedElements:(id *)a1;
- (BOOL)canBeRemotelyEvaluatedWithCapabilities:(id)a0;
- (BOOL)supportsAttributeKeyPathAnalysis;
- (id)requiredKeyPathsOrError:(id *)a0;
- (id)iteratorForInput:(id)a0;
- (id)initWithSortDescriptors:(id)a0;

@end
