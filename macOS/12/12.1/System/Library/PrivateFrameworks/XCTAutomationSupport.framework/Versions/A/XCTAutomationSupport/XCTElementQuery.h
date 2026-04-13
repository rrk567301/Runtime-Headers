@class XCElementSnapshot, NSArray, NSDictionary, NSSet, XCTTimeoutControls, NSString, XCAccessibilityElement;
@protocol XCTElementSnapshotProvider, XCTElementSnapshotAttributeDataSource;

@interface XCTElementQuery : NSObject <NSSecureCoding, XCTCapabilitiesProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *transformers;
@property (retain) XCElementSnapshot *rootElementSnapshot;
@property BOOL useLegacyElementType;
@property (readonly, copy) XCAccessibilityElement *rootElement;
@property (readonly) unsigned long long options;
@property (readonly) BOOL isMacOS;
@property (retain) XCTTimeoutControls *timeoutControls;
@property (readonly, copy) NSArray *snapshotAttributes;
@property (readonly, copy) NSDictionary *snapshotParameters;
@property (retain) id<XCTElementSnapshotProvider> snapshotProvider;
@property (weak) id<XCTElementSnapshotAttributeDataSource> elementSnapshotAttributeDataSource;
@property (readonly) BOOL supportsAttributeKeyPathAnalysis;
@property BOOL suppressAttributeKeyPathAnalysis;
@property (readonly, copy) NSSet *elementTypes;
@property (copy, nonatomic) id /* block */ evaluationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)provideCapabilitiesToBuilder:(id)a0;
+ (id)_descriptionForTransformerArray:(id)a0;
+ (id)_firstMatchTransformerSubarraysFromArray:(id)a0 trailingMatchAllTransformers:(id *)a1;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBeRemotelyEvaluatedWithCapabilities:(id)a0;
- (id)matchingSnapshotsWithRelatedElements:(id *)a0 noMatchesMessage:(id *)a1 error:(id *)a2;
- (id)initWithRootElement:(id)a0 transformers:(id)a1 options:(unsigned long long)a2 isMacOS:(BOOL)a3;
- (id)initWithRootElement:(id)a0 transformers:(id)a1 options:(unsigned long long)a2 isMacOS:(BOOL)a3 timeoutControls:(id)a4;
- (BOOL)hasTransformerWithStopsOnFirstMatch;
- (id)_snapshotForElement:(id)a0 error:(id *)a1;
- (id)_rootElementSnapshot:(id *)a0;
- (id)matchingSnapshotsInSnapshotTree:(id)a0 relatedElements:(id *)a1 noMatchesMessage:(id *)a2 error:(id *)a3;
- (id)_firstMatchingSnapshotForInput:(id)a0 transformersSubarrays:(id)a1 relatedElements:(id *)a2 noMatchesMessage:(id *)a3 error:(id *)a4;
- (id)_allMatchingSnapshotsForInput:(id)a0 transformers:(id)a1 relatedElements:(id *)a2 noMatchesMessage:(id *)a3 error:(id *)a4;
- (id)_firstMatchingSnapshotForInput:(id)a0 transformers:(id)a1 relatedElements:(id *)a2 noMatchesMessage:(id *)a3 error:(id *)a4;
- (id)initWithRootElement:(id)a0 transformers:(id)a1;
- (id)initWithRootElement:(id)a0 transformers:(id)a1 options:(unsigned long long)a2;

@end
