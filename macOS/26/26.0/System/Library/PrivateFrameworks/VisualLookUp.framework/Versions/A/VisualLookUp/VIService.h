@class _TtC12VisualLookUp35VisualIntelligenceServiceCompatible, _TtC12VisualLookUp26VITextLookupFlowCompatible;

@interface VIService : NSObject {
    _TtC12VisualLookUp35VisualIntelligenceServiceCompatible *_compatService;
    _TtC12VisualLookUp26VITextLookupFlowCompatible *_textLookupFlow;
}

+ (unsigned long long)parseFlowCacheVersion;

- (id)init;
- (void).cxx_destruct;
- (id)ontologyGraph;
- (id)lookupTextWithQuery:(id)a0 completion:(id /* block */)a1;
- (id)refineRegionsWithRequest:(id)a0 error:(id *)a1;
- (void)checkEncryptedSearchProxyEnabledWithCompletion:(id /* block */)a0;
- (void)clearCacheWithOption:(long long)a0;
- (id)parseForENLabelWithVisualQuery:(id)a0 cachedResults:(id)a1 domains:(id)a2 completion:(id /* block */)a3;
- (id)parseWithVisualQuery:(id)a0 cachedResults:(id)a1 completion:(id /* block */)a2;
- (id)searchWithParsedVisualQuery:(id)a0 completion:(id /* block */)a1;
- (id)searchWithVisualQuery:(id)a0 completion:(id /* block */)a1;
- (id)submitUserFeedback:(id)a0 completion:(id /* block */)a1;
- (id)initWithNetworkTimeoutInterval:(long long)a0;
- (id)detectWithImage:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2;
- (id)encryptedSearchWithParsedVisualQuery:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
- (id)getEncryptedSearchDomainsWithVisualQuery:(id)a0 cachedResults:(id)a1 completion:(id /* block */)a2;
- (id)initWithTrialOverrideType:(id)a0 namespaces:(id)a1 factors:(id)a2 values:(id)a3;
- (id)newStreamingSession;
- (id)parseWithVisualQuery:(id)a0 completion:(id /* block */)a1;
- (id)pegasusPayloadWithParsedVisualQuery:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (struct CGSize { double x0; double x1; })targetImageSizeForInputImageSize:(struct CGSize { double x0; double x1; })a0;

@end
