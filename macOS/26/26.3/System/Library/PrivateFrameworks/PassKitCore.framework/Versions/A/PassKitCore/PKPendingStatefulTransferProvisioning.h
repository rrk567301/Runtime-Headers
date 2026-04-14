@class NSString, PKSharingMessage, PKPassShare;

@interface PKPendingStatefulTransferProvisioning : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *transportIdentifier;
@property (retain, nonatomic) PKSharingMessage *invitation;
@property (retain, nonatomic) PKPassShare *share;
@property (retain, nonatomic) NSString *originalShareURL;
@property (retain, nonatomic) NSString *accountAttestationAnonymizationSalt;

- (id)type;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)credential;
- (void)encodeWithCoder:(id)a0;
- (id)initForDatabase;
- (BOOL)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)credentialWithHandle:(id)a0;
- (id)initWithTransportIdentifier:(id)a0 invitation:(id)a1 share:(id)a2;
- (BOOL)representsCredential:(id)a0;

@end
