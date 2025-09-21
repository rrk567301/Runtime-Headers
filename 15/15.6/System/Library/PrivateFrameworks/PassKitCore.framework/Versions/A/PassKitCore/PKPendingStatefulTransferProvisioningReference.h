@class NSString, PKPassShare;

@interface PKPendingStatefulTransferProvisioningReference : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *invitationURL;
@property (readonly, nonatomic) PKPassShare *share;
@property (retain, nonatomic) NSString *accountAttestationAnonymizationSalt;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (char)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithInvitationURL:(id)a0 share:(id)a1;
- (char)representsCredential:(id)a0;

@end
