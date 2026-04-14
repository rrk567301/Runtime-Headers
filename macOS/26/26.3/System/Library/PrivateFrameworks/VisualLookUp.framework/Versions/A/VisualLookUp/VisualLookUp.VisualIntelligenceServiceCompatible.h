@class NSArray, _TtC12VisualLookUp23OntologyGraphCompatible;

@interface VisualLookUp.VisualIntelligenceServiceCompatible : NSObject {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ cancellables;
}

@property (class, nonatomic, readonly) NSArray *encryptedVisualSearchDomains;
@property (class, nonatomic, readonly) NSArray *richLabelEligibleVisualSearchDomains;

@property (nonatomic, readonly) _TtC12VisualLookUp23OntologyGraphCompatible *ontologyGraph;

+ (unsigned long long)parseFlowCacheVersion;

- (id)init;
- (void).cxx_destruct;
- (id)refineRegionsWithRequest:(id)a0 error:(id *)a1;
- (id)searchWithVisualQuery:(id)a0 completion:(id /* block */)a1;
- (void)checkEncryptedSearchProxyEnabledWithAction:(id /* block */)a0;
- (void)clearCacheWithCacheOption:(long long)a0;
- (id)detectWithImage:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2;
- (id)encryptedSearchWithImage:(id)a0 visualUnderstanding:(id)a1 queryContext:(id)a2 domain:(id)a3 completion:(id /* block */)a4;
- (id)getEncryptedSearchDomainsWithVisualQuery:(id)a0 cachedResults:(id)a1 completion:(id /* block */)a2;
- (id)initWithOverrideTrialTypes:(id)a0 namespaces:(id)a1 factors:(id)a2 values:(id)a3;
- (id)initWithTimeoutInterval:(long long)a0;
- (id)parseCachedWithVisualQuery:(id)a0 cachedResults:(id)a1 completion:(id /* block */)a2;
- (id)parseForENRichLabelWithVisualQuery:(id)a0 cachedResults:(id)a1 domains:(id)a2 completion:(id /* block */)a3;
- (id)parseWithVisualQuery:(id)a0 completion:(id /* block */)a1;
- (id)pegasusPayloadDataWithImage:(id)a0 visualUnderstanding:(id)a1 queryContext:(id)a2 options:(unsigned long long)a3 error:(id *)a4;
- (id)searchWithImage:(id)a0 visualUnderstanding:(id)a1 queryContext:(id)a2 completion:(id /* block */)a3;
- (id)submitUserFeedbackWithUserFeedback:(id)a0 completion:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })targetImageSizeWithInputImageSize:(struct CGSize { double x0; double x1; })a0;

@end
