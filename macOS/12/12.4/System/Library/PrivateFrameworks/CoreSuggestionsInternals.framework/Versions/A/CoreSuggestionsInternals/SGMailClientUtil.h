@class ECDKIMVerifier, EMDaemonInterface;

@interface SGMailClientUtil : NSObject

@property (readonly, nonatomic) EMDaemonInterface *emailDaemon;
@property (readonly, nonatomic) ECDKIMVerifier *dkimVerifier;

+ (id)sharedInstance;
+ (id)convertLineEndingsToNetwork:(id)a0;

- (void).cxx_destruct;
- (id)_init;
- (BOOL)isMessageAvailable:(id)a0;
- (long long)verifyDKIMSignatureForMailWithIdentifier:(id)a0 error:(id *)a1;
- (id)allVIPEmailAddresses;
- (long long)verifyDKIMSignatureForPipelineEntity:(id)a0 error:(id *)a1;
- (id)messageWithIdentifier:(id)a0 error:(id *)a1;
- (id)dataForMessageWithIdentifier:(id)a0 error:(id *)a1;
- (long long)verifyDKIMSignatureForMailWithData:(id)a0 error:(id *)a1;
- (long long)verifyDKIMSignatureForMailWithData:(id)a0 options:(long long)a1 error:(id *)a2;
- (id)signaturesToRemoveForDKIMVerificationContext:(id)a0 withFromHeaderDomain:(id)a1;
- (long long)verifyDKIMSignatureForStorageEvent:(id)a0 error:(id *)a1;

@end
