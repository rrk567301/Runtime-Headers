@class NSString, NSSet;

@interface XCTElementSetCodableTransformer : NSObject <XCTElementSetTransformer, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *transformationDescription;
@property (readonly) char supportsAttributeKeyPathAnalysis;
@property char stopsOnFirstMatch;
@property (readonly, copy) NSSet *elementTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)provideCapabilitiesToBuilder:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)canBeRemotelyEvaluatedWithCapabilities:(id)a0;
- (id)iteratorForInput:(id)a0;
- (id)requiredKeyPathsOrError:(id *)a0;
- (id)transform:(id)a0 relatedElements:(id *)a1;

@end
