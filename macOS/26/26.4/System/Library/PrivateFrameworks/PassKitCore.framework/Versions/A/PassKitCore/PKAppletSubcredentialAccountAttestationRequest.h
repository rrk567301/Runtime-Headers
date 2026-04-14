@class NSData;

@interface PKAppletSubcredentialAccountAttestationRequest : PKAccountAttestationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *subCASEResidencyAttestation;
@property (copy, nonatomic) NSData *sharingTokenHash;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestData:(id)a0;

@end
