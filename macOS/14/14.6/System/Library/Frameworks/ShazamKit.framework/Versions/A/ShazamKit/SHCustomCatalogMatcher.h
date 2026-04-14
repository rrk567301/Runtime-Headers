@class MRE, SHCustomCatalog, NSString, SHCustomCatalogMatcherResultBuilder;
@protocol SHMatcherDelegate;

@interface SHCustomCatalogMatcher : NSObject <SHMatcher>

@property (readonly) MRE *mre;
@property (readonly) SHCustomCatalog *customCatalog;
@property (readonly) SHCustomCatalogMatcherResultBuilder *matchResultBuilder;
@property (weak) id<SHMatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)matchSignature:(id)a0;
- (id)MRESignaturesFromMatches:(id)a0;
- (void)stopRecognition;
- (long long)algorithmToMREAlgorithm:(long long)a0;
- (id)initWithCustomCatalog:(id)a0;
- (id)matcherResponseFrom:(id)a0 signatureAlignments:(id)a1 querySignature:(id)a2 error:(id)a3;
- (void)startRecognitionForRequest:(id)a0;
- (void)stopRecognitionForRequestID:(id)a0;
- (long long)storeDensityToMREDensity:(long long)a0;
- (BOOL)supportsTrackingOnSignature:(id)a0;
- (id)trackQuerySignature:(id)a0 inReferenceSignature:(id)a1;

@end
