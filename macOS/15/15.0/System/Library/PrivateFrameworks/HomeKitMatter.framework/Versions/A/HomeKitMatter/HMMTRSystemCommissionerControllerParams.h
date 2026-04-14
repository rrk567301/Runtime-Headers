@class NSNumber, NSArray;

@interface HMMTRSystemCommissionerControllerParams : HMFObject <MTROperationalCertificateIssuer>

@property (retain) NSNumber *commissioneeNodeID;
@property (copy, nonatomic) NSArray *productAttestationAuthorityCertificates;
@property (copy, nonatomic) NSArray *certificationDeclarationCertificates;
@property (readonly, nonatomic) BOOL shouldSkipAttestationCertificateValidation;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)issueOperationalCertificateForRequest:(id)a0 attestationInfo:(id)a1 controller:(id)a2 completion:(id /* block */)a3;
- (BOOL)fetchControllerParamsAllowingNew:(BOOL)a0 nocSigner:(id *)a1 controllerWrapper:(id *)a2;
- (void)handleKeyPairDataChanged;
- (id)initWithQueue:(id)a0 controllerFactory:(id)a1;

@end
