@class SHCustomCatalog, SHSignatureGenerator, NSString, SHCustomCatalogMatcher;
@protocol SHMatcherDelegate;

@interface SHLiveMatcher : NSObject <SHCustomCatalogDelegate, SHMatcher>

@property (retain) SHCustomCatalog *customCatalog;
@property (retain) SHCustomCatalogMatcher *mreMatcher;
@property (retain) SHSignatureGenerator *rollingSignatureGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<SHMatcherDelegate> delegate;

- (void).cxx_destruct;
- (void)startRecognitionForRequest:(id)a0;
- (void)_bufferProduced:(id)a0 atTime:(id)a1;
- (id)initWithCustomCatalog:(id)a0;
- (id)buildRollingSignatureGenerator;
- (void)buildCustomCatalogForQuerySignature:(id)a0 referenceSignatures:(id)a1;
- (id)duplicateCustomCatalog:(id)a0 error:(id *)a1;

@end
