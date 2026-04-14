@class SHReferenceMatch, NSString, SHCustomCatalog;
@protocol SHMatcherDelegate;

@interface SHVerificationSweepMatcher : NSObject <SHMatcher>

@property (readonly) SHCustomCatalog *customCatalog;
@property (readonly) SHReferenceMatch *referenceMatch;
@property (weak) id<SHMatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)matchSignature:(id)a0;
- (void).cxx_destruct;
- (void)stopRecognition;
- (id)initWithCustomCatalog:(id)a0;
- (id)matchFromMREResults:(id)a0 signature:(id)a1;
- (id)matcherResponseFrom:(id)a0 querySignature:(id)a1 error:(id)a2;
- (void)startSignatureMatchRequest:(id)a0;
- (void)stopRecognitionForRequestID:(id)a0;

@end
