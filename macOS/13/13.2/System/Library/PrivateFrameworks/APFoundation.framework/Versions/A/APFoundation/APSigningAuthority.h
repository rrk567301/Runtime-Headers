@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface APSigningAuthority : NSObject <APSigningAuthorizable>

@property (nonatomic) unsigned int version;
@property (nonatomic) struct FPSAPContextOpaque_ { } *session;
@property (nonatomic) struct FairPlayHWInfo_ { unsigned int IDLength; unsigned char ID[20]; } hwInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setupQueue;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_validateAllowListingForPoolCreation:(id)a0;
+ (BOOL)_hasEntitlement:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (BOOL)isValidSignature:(id)a0 forData:(id)a1 error:(id *)a2;
- (id)signatureForData:(id)a0 error:(id *)a1;
- (id)signatureForRawData:(id)a0 error:(id *)a1;
- (BOOL)_initializeFairPlay;
- (void)_certificateRetrievalDidFinish:(id)a0 isCachedCertificate:(BOOL)a1 error:(id)a2;
- (void)_requestCertificate:(BOOL)a0;
- (void)_setupNegotiationStepDidFinish:(id)a0 certificateIsCached:(BOOL)a1 error:(id)a2;
- (void)_fairPlaySAPExchange:(id)a0 certificateIsCached:(BOOL)a1;
- (void)_setupRequestSigning;
- (id)_signatureForData:(id)a0 error:(id *)a1;

@end
