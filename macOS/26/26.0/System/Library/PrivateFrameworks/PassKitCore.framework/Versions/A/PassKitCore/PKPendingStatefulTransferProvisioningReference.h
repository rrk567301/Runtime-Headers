@class NSString, PKPassShare;

@interface PKPendingStatefulTransferProvisioningReference : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *invitationURL;
@property (readonly, nonatomic) PKPassShare *share;
@property (retain, nonatomic) NSString *accountAttestationAnonymizationSalt;

- (id)type;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithInvitationURL:(id)a0 share:(id)a1;
- (BOOL)representsCredential:(id)a0;

@end
