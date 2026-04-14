@class MRE, SHCustomCatalog, NSString, SHCustomCatalogMatcherResultBuilder;
@protocol SHMatcherDelegate;

@interface SHCustomCatalogMatcher : NSObject <SHMatcher>

@property (retain) MRE *mre;
@property (readonly) SHCustomCatalog *customCatalog;
@property (readonly) SHCustomCatalogMatcherResultBuilder *matchResultBuilder;
@property (weak) id<SHMatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)matchSignature:(id)a0;
- (id)MRESignaturesFromMatches:(id)a0;
- (void)stopRecognition;
- (long long)algorithmToMREAlgorithm:(long long)a0;
- (id)bestMatchFromMatchedResults:(id)a0;
- (void)buildMRE;
- (id)initWithCustomCatalog:(id)a0;
- (BOOL)shouldTrackQuerySignature:(id)a0;
- (void)startRecognitionForRequest:(id)a0;
- (void)stopRecognitionForRequestID:(id)a0;
- (long long)storeDensityToMREDensity:(long long)a0;
- (id)stringIDFromTrackID:(unsigned long long)a0;

@end
